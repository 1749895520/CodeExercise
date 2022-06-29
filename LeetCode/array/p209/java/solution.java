class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        return getMinLenth(target,nums);
    }
    public int getMinLenth(int target,int[] nums) {
        int left = 0,right = 0,sum = 0,minLenth = Integer.MAX_VALUE;
        while(right<nums.length) {
            sum += nums[right++];
            while(sum - nums[left] >= target) {
                sum -= nums[left++];
            }
            if(sum>=target) {
                minLenth = Math.min(right-left,minLenth);
            }
        }
        return minLenth == Integer.MAX_VALUE ? 0 : minLenth;
    }
}