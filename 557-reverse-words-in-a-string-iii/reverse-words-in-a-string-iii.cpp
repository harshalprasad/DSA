class Solution {
public:
    string reverseWords(string s) {

        string ans;
        string result;

        for(int i=0; i<s.size(); i++)
        {   
            if(s[i] != ' ')
            ans += s[i];

            if(s[i] == ' ')
            {
                reverse(ans.begin(),ans.end());
                result += ans;
                result += " ";
                ans = "";
            }

            if(i == s.size()-1)
            {
                 reverse(ans.begin(),ans.end());
                result += ans;
            }

           

        }

       

        return result;
        
    }
};