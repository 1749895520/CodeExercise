class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int flag = nums[0];
        int times = 1;
        for(int i=1;i<nums.size();i++) {
            if(times==0) {
                flag = nums[i];
                times = 1;
            } else if(flag==nums[i]) {
                times++;
            } else {
                times--;
            }
        }
        return flag;
    }
};