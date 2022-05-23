class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0,arrLen = arr.size();
        vector<int> preSum(arrLen+1);
        preSum[0] = 0;
        for(int i=0;i<arrLen;i++) {
            preSum[i+1] = preSum[i] + arr[i];
        }
        for(int len = 1;len<=arrLen+1;len+=2) {
            for(int left = 0,right = left+len;right<arrLen+1;left++,right++) {
                sum += preSum[right] - preSum[left];
            }
        }
        return sum;
    }
};