class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
            int left = 0, right = 0;
        for(int n:weights){
            left = max(left,n);
            right += n;
        }
        while(left<right){
            int mid = left+(right-left)/2;
            if(weightsCarry(weights, mid)<=days){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
    int weightsCarry(vector<int>& weights, int package){
        int days = 0;
        for(int i=0;i<weights.size();){
            int carry = 0;
            while(i<weights.size()){
                if(package-carry<weights[i]){
                    break;
                }
                carry += weights[i];
                i++;
            }
            days++;
        }
        return days;
    }
};