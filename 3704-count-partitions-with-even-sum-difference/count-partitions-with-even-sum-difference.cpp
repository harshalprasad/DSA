class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int partition = 0;
        int prefix = 0;
        int total = 0;
        for(int i=0; i<nums.size(); i++)
        {
            total += nums[i];
        }

        for(int i=0; i<nums.size()-1; i++)
        {
            prefix += nums[i];
            if((total - 2*prefix) %2 == 0)
            partition++;
        }

        return partition;
        
    }
};