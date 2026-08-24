class Solution {
public:
    int subarraySum(vector<int>& nums) {

        int total = 0,prefix = 0;

        for(int i=0; i<nums.size(); i++)
        {
            int j = max(0,i-nums[i]);
            prefix = 0;
            for(int k = j; k<=i; k++)
            {
                prefix += nums[k];
            }

            total += prefix;
        }

        return total;
        
    }
};