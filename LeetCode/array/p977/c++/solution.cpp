class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int pL = 0,pR = 0;
        while(nums[pR]<0 && pR<nums.size()-1) {
            pR++;
        }
        pL = pR - 1;
        vector<int> ans;
        while(pL>=0&&pR<nums.size()) {
            int num = -nums[pL] < nums[pR] ? -nums[pL--] : nums[pR++];
            ans.push_back(num*num);
        }
        while(pL>=0) {
            ans.push_back(nums[pL]*nums[pL--]);
        }
        while(pR<nums.size()) {
            ans.push_back(nums[pR]*nums[pR++]);
        }
        return ans;
    }
};