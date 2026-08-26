class Solution {
public:
    int balancedStringSplit(string s) {
        int count_l = 0;
        int count_r = 0;
        int substring = 0;
        string ans;

        for(int i=0; i<s.size(); i++)
        {
            ans += s[i];
            if(s[i] == 'L')
            count_l++;
            else 
            count_r++;

            if(count_l == count_r)
            {
                substring++;
                ans = "";
            }
        }

        return substring;
        
    }
};