class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;

        int k=0;
        arr1.push_back(nums[k++]);
        arr2.push_back(nums[k++]);

        while(k<nums.size())
        {
            if(arr1.back()>arr2.back())
            {
                arr1.push_back(nums[k++]);
            }
            else
            {
                arr2.push_back(nums[k++]);
            }
        }


        for(int i=0; i<arr2.size(); i++)
        {
            arr1.push_back(arr2[i]);
        }

        return arr1;
        
    }
};