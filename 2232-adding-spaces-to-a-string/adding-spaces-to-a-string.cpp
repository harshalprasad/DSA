class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int m=0;
        int j=0;

        for(int i=0; i<spaces.size(); i++)
        {
            int k = spaces[i] - m;
            
            while(k)
            {
                ans += s[j++];
                k--;
            }
            ans += " ";
            m = spaces[i];
        }

        while(j<s.size())
        {
            ans += s[j++];
        }

        return ans;
        
    }
};