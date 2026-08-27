class Solution {
public:
    int reverseDegree(string s) {
        
        vector<int>reverse_alpha = {26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
        int total_sum = 0;

        for(int i=0; i<s.size(); i++)
        {
            total_sum += reverse_alpha[s[i]-'a']*(i+1);
        }

        return total_sum;
    }
};