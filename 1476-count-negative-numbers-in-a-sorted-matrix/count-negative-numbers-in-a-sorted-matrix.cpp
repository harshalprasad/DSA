class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int count=0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++)
        {
            int left = 0;
            int right = m-1;
            int ans = -1;
            while(left<=right)
            {
                int mid = left + (right-left)/2;
                if(grid[i][mid]<0)
                {
                    ans = mid;
                    right = mid-1;
                }
                else
                {
                    left = mid+1;
                }
            }
            if(ans != -1)
            count += (m - ans);
        }

        return count;
        
    }
};