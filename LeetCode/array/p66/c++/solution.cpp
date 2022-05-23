class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p = digits.size()-1;
        vector<int> ans(digits.size()+1,0);
        digits[p]++;
        while(digits[p]==10) {
            digits[p--] = 0;
            if(p>=0){
                digits[p]++;
            } else {
                ans[0] = 1;
                return ans;
            }
        }
        return digits;
    }
};