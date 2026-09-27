class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int>occurence(26);
        vector<int>result;

        for(int i=0; i<s.size(); i++)
        {
            occurence[s[i]-'a'] = i;
        }

        int end,i=0,j;

        while(i<n)
        {
            end = occurence[s[i]-'a'];
            j=i+1;
            while(j<end)
            {
                end = max(occurence[s[j]-'a'],end);
                j++;
            }

            result.push_back(end-i+1);
            i = end+1;
        }

        return result;


        
    }
};