class Solution {
public:
    int preimageSizeFZF(int k) {
        return (right_bound(k)-left_bound(k)+1);
    }
    long jieCheng(long times) {
        long ans = 0;
        for(long i = times;i/5>0;i/=5) {
            ans += i/5;
        }
        return ans;
    }
    long left_bound(int target) {
        long left = 0,right = 9e+9;
        while(left<=right) {
            long mid = left + (right - left) / 2;
            if(jieCheng(mid)<target){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return left;
    }
    long right_bound(int target) {
        long left = 0,right = 9e+9;
        while(left<=right) {
            long mid = left + (right - left) / 2;
            if(jieCheng(mid)>target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return right;
    }
};