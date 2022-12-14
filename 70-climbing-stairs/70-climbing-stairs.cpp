class Solution {
public:
    int climbStairs(int n) {
        if (n < 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        int ans = 0, p = 1, q = 2;
        for (int i = 3; i <= n; ++i) {
            ans = p+q;
            p = q;
            q = ans;
        }
        return ans;
    }
};