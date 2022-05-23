class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x!=0) {
            ans *= 10;
            ans += x%10;
            x /= 10;
        }
        return (int)ans == ans ? (int)ans : 0;
    }
};