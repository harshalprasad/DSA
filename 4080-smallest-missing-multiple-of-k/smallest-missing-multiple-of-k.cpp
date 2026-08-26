class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        vector<int>freq(100);
        int j = k;

        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]-1]++;
        }

        while(k<=100)
        {
            if(freq[k-1] == 0)
            return k;
            else
            k += j;
        }

        return k;
    }
};