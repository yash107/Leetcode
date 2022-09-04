class Solution {
public:
    string truncateSentence(string s, int k)
    {
        int l=s.size();
        string str="";
        for(int i=0;i<l;i++)
        {
            if(s[i]==' ')
            {
                k--;
            }
            if(k==0)
            {
                break;
            }
            str=str+s[i];
            if(i==s.length())
            {
                break;
            }
        }
        return str;
    }
};