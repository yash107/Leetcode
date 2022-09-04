class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for (int i=s.size()-1;i>=0;i--) {
            if (s[i]!=' ') {
                while (i>=0) {
                    if (s[i]==' ') break;
                    ans++;
                    i--;
                }
                return ans;
            }
        }
        return 0;
    }
};