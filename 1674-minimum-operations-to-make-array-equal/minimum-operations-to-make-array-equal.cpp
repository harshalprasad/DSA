class Solution {
public:
    int minOperations(int n) {

        vector<int>nums(n);

        for(int i=0; i<n; i++)
        {
            nums[i] = (2*i) + 1;
        }

        int i=0; 
        int j=n-1;
        int opern=0;

        while(i<j)
        {
            while(nums[i] != nums[j])
            {
                nums[i]++;
                nums[j]--;
                opern++;
            }
            i++;
            j--;
        }

        return opern;
        
    }
};