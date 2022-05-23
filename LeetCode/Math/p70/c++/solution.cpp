class Solution {
public:
    int kinds;
    int climbStairs(int n) {
        int p1 = 0,p2 = 0,ans = 1;
        while(n--) {
            p1 = p2;
            p2 = ans;
            ans = p1 + p2;
        }
        return ans;
    }
};