class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0,fast = 0;
        while(++fast<nums.size()){
            if(nums[slow]!=nums[fast]){
                nums[++slow] = nums[fast];
            }
        }
        return slow+1;
    }
};