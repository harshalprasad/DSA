class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minel = INT_MAX;

        for(int i=0; i<nums1.size(); i++)
        {
            minel = min(minel,nums1[i]);
        }

        if(minel%2 == 1)
        return true;

        for(int i=0; i<nums1.size(); i++)
        { 
            if(nums1[i]%2 == 1)
            return false;
        }

        return true;
        
    }
};