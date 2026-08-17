class Solution {
public:

    void merge(vector<int>& nums, int lb, int mid, int ub)
    {
        int i = lb;
        int j = mid + 1;
        int k = 0;

        vector<int> arr(ub - lb + 1);

        while(i <= mid && j <= ub)
        {
            if(nums[i] <= nums[j])
            {
                arr[k] = nums[i];
                i++;
                k++;
            }
            else
            {
                arr[k] = nums[j];
                j++;
                k++;
            }
        }

        while(i <= mid)
        {
            arr[k] = nums[i];
            i++;
            k++;
        }

        while(j <= ub)
        {
            arr[k] = nums[j];
            j++;
            k++;
        }

        // Copy back to nums
        k = 0;

        for(int i = lb; i <= ub; i++)
        {
            nums[i] = arr[k];
            k++;
        }
    }

    void mergesort(vector<int>& nums, int lb, int ub)
    {
        if(lb < ub)
        {
            int mid = lb + (ub - lb) / 2;

            mergesort(nums, lb, mid);
            mergesort(nums, mid + 1, ub);

            merge(nums, lb, mid, ub);
        }
    }

    vector<int> sortArray(vector<int>& nums)
    {
        mergesort(nums, 0, nums.size() - 1);

        return nums;
    }
};