class Solution {
public:
    int fib(int n) {
        int f1 = 0,f2 = 1,f = 0;
        while(n--) {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        return f1;
    }
};