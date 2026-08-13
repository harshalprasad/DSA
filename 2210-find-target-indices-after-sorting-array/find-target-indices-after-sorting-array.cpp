class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int left = 0, mid;
        int right = nums.size() - 1;
        int left_pos = -1 ;
        int right_pos = -1;
        vector<int>ans;

        while(left<=right)
        {
            mid = left + (right - left)/2;

            if(nums[mid] == target)
            {
                left_pos = mid;
                right = mid-1;
            }
            else if(nums[mid] < target)
            left = mid+1;
            else
            right = mid-1;
        }

        left = 0;
        right = nums.size() - 1;

        while(left<=right)
        {
            mid = left + (right - left)/2;

            if(nums[mid] == target)
            {
                right_pos = mid;
                left = mid+1;
            }
            else if(nums[mid] < target)
            left = mid+1;
            else
            right = mid-1;
        }

        if(left_pos == -1 )
        return ans;
        else
        {
            for(int i= left_pos ; i<=right_pos; i++)
            {
                ans.push_back(i);
            }
        }

        return ans;





        
    }
};