class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorr = 0;
        int n=nums.size();

        for(int i=0; i<n; i++)
        {
            xorr ^= nums[i];
        }

        if(xorr)
        return n;
       
       for(int i=1; i<n; i++)
        {
           if(nums[i] != 0)
           return n-1;
        }

        return 0;

      
    
    }
};