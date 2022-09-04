class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int len=s.size();
        int c=0;
        for(int i=0;i<len;i++)
        {
            int cl=0,cr=0;
            for(int j=0;j<i;j++)
            {
                if(s[j]=='L')
                {
                    cl++;
                }
                else if (s[j]=='R')
                {
                    cr++;
                }
            }
            if(cl==cr)
            {
                c++;
            }
        }
        return c;
        
    }
};