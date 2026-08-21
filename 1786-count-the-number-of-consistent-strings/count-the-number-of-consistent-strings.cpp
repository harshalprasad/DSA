class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int count=0;
        bool flag;
        for(int i=0; i<words.size(); i++)
        {
            string ans = words[i];
            int j=0;
            while(j<ans.size())
            {
               char s = ans[j];
                flag = false;
               for(int k=0; k<allowed.size(); k++)
               {
                    if(s == allowed[k])
                    flag = true;
               }
                j++;
               if(!flag)
               break;

               
            }

            if(flag)
            count++;
        }

        return count;
        
    }
};