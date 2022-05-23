class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
    void reverse(vector<int>& nums, int left, int right) {
        int temp = 0;
        while(left<right) {
            temp = nums[left];
            nums[left++] = nums[right];
            nums[right--] = temp;
        }
    }
};