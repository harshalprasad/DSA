class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        vector<int>arr(nums.size());
       
        for(int i=0; i<nums.size(); i++)
        {
            maxi = max(maxi,nums[i]);
            mini = INT_MAX;
            for(int j = nums.size()-1; j>=i; j--)
            {
                mini = min(mini,nums[j]);
            }

            arr[i] = maxi - mini;
        }

        for(int p=0; p<arr.size(); p++)
        {
            if(arr[p]<=k)
            return p;
        }

        return -1;

        
    }
};