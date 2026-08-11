class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];
        

        if(nums.size() == 1)
        return nums[0]+1;

       for(int i=1; i<nums.size(); i++)
       {
        if(nums[i] == nums[i-1]+1)
        sum += nums[i];
        else
        break;
       }
        
        while(sum)
        {   bool flag = false;
            for(int i=0; i<nums.size(); i++)
            {
                if(sum == nums[i])
                flag = true;

            }

            if(flag)
            sum++;
            else
            return sum;
        }

        return 0;
        
    }
};