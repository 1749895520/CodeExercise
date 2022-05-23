class Solution {
public:
    int subtractProductAndSum(int n) {
        int muit = 1,sum = 0;
        while(n>0) {
            int num = n%10;
            muit *= num;
            sum += num;
            n /= 10;
        }
        return muit-sum;
    }
};