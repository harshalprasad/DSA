class Solution {
public:
    int balancedStringSplit(string s) {
        int substring = 0;
        int balancetracker = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'L')
            balancetracker++;
            else
            balancetracker--;

            if(balancetracker == 0)
            substring++;
        }

        return substring;
        
    }
};