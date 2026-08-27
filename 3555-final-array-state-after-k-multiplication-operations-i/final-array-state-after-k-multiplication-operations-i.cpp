class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        while(k)
        {   int min_idx = 0;
            for(int i=1; i<nums.size(); i++)
            {
                if(nums[i]<nums[min_idx])
                {
                    min_idx = i;
                }
            }

            nums[min_idx] *= multiplier;
            k--;
        }

        return nums;
        
    }
};