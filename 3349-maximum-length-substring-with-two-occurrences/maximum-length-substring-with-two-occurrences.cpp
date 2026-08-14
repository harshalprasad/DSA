class Solution {
public:
    int maximumLengthSubstring(string s) {
        //sliding window protocol
        vector<int>count(26);
        

        
        int i=0,j=0, ans=0;

        while(j<s.size())
        {
             count[s[j]-'a']++;
            while(count[s[j] - 'a']>2)
            {
                count[s[i]-'a']--;
                i++;
            }
           
            ans = max(ans,(j-i+1));
            j++;

        }

        return ans;
        
    }
};