class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxAns = nums[0];
        for(int n:nums) {
            sum = sum > 0 ? sum + n : n;
            if(sum > maxAns) {
                maxAns = sum;
            }
        }
        return maxAns;
    }
};