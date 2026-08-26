class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        string result ;
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            if (s[i] == '1')
            count++;
        }

        if (count<k)
        return result;
        else
        result = s;

        for(int i=0; i<s.size(); i++)
        {   string ans;
            count = 0;
            for(int j=i; j<s.size(); j++)
            {   if(count<k)
                {
                ans += s[j];
                    if(s[j] == '1')
                    count++;
                }
                else
                break;

            }

          if(count == k && ans.size()<=result.size())
          {
           if (ans.size() == result.size())
           { int n=0;
                while(n<ans.size())
                {
                    if(ans[n] == result[n])
                    {
                        n++;
                    }
                    else if(ans[n]>result[n])
                    {
                        result = result;
                        break;
                    }
                    else
                    {
                        result = ans;
                        break;
                    }


                }
            }
            else
            {
                    result = ans;
            }
           }
          

        }

        return result;
        
    }
};