class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int left = 0,right = 0;
        for(int n:weights) {
            left = Math.max(left,n);
            right += n;
        }
        while(left<=right) {
            int mid = left+(right-left)/2;
            if(spendDays(weights,mid)<=days) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
    int spendDays(int[] weights, int packages) {
        int days = 0;
        for(int i=0;i<weights.length;) {
            int carry = 0;
            while(i<weights.length) {
                if(packages<carry+weights[i]) {
                    break;
                }
                carry += weights[i++];
            }
            days++;
        }
        return days;
    }
}