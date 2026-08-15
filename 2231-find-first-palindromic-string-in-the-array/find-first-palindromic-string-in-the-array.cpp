class Solution {
public:
    bool palindrome(string s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<=j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            return false;
        }

        return true;
    }


    string firstPalindrome(vector<string>& words) {
        string ans;
        bool flag;
        
        for(int i=0; i<words.size(); i++)
        {
            ans = words[i];
            flag = palindrome(ans);
            if(flag)
            return ans;
        }

        return "";
    }
};