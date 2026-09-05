bool comp(vector<int> &a, vector<int> &b)
{
    return a[1]<b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //sort according to end in ascending order...
        int n = intervals.size();

        sort(intervals.begin(),intervals.end(),comp);

        int end = intervals[0][1];
        int remove = 0;

        for(int i=1; i<n; i++)
        {
            if(intervals[i][0]<end)
            {
                remove++;
            }
            else
            {
                end = intervals[i][1];
            }
        }

        return remove;
        
    }
};