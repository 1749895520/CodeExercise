class Solution {
    public void moveZeroes(int[] nums) {
        int slow = 0,fast = 0;
        while(fast<nums.length) {
            if(nums[fast++]!=0) {
                nums[slow++] = nums[fast-1];
            }
        }
        while(slow<nums.length) {
            nums[slow++] = 0;
        }
    }
}