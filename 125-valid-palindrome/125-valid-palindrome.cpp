class Solution {
public:
    bool isPalindrome(string s)
    {
       string ans = "";
        for(int i=0;i<s.length();i++)
        {
            char c = s[i];

            if (int(c) > 64 and int(c) < 91)
                ans += tolower(c);

             else if (int(c) > 96 and int(c) < 123)
                  ans += c;

             else if (int(c) >= 48 and int(c) <= 57)
                  ans += c;
        }
   
    string cmpy=ans;
    reverse(ans.begin(),ans.end());
    return ans==cmpy;
    }
};