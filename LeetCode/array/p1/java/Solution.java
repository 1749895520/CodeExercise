class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] i_result = new int[2];
        for(int i=0;i<nums.length-1;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    i_result[0]=i;
                    i_result[1]=j;
                    return i_result;
                }
            }
        }
        return i_result;
    }
}