class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int take_garb = 0;
        int m_idx = 0;
        int p_idx = 0;
        int g_idx = 0;

        for(int i=0; i<garbage.size(); i++)
        {
            string ans = garbage[i];
            for(int j=0; j<ans.size(); j++)
            {
                if(ans[j] == 'G')
                {
                    g_idx = i;
                }
                else if(ans[j] == 'M')
                {
                    m_idx=i;
                }
                else
                {
                    p_idx=i;
                }
                take_garb++;
            }
        }
 
        for(int i=1; i<travel.size(); i++)
        {
            travel[i] += travel[i-1];
        }

        take_garb += m_idx>0 ? travel[m_idx-1] : 0;
        take_garb += g_idx>0 ? travel[g_idx-1] : 0;
        take_garb += p_idx>0 ? travel[p_idx-1] : 0;

        return take_garb;
        
    }
};