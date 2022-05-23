class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0,right = nums.size()-1,mid_left,mid_right;
        while(left<=right){
            mid_left = left+(right-left)/2;
            if(nums[mid_left]<target){
                left = mid_left+1;
            }
            else if(nums[mid_left]>target){
                right = mid_left-1;
            }
            else if(nums[mid_left]==target){
                right = mid_left-1;
            }
        }
        if(left>=nums.size()||nums[left]!=target){
            return {-1,-1};
        }
        else{
            mid_left = left;
        }
        left = 0;
        right = nums.size()-1;
        while(left<=right){
            mid_right = left+(right-left)/2;
            if(nums[mid_right]<target){
                left = mid_right+1;
            }
            else if(nums[mid_right]>target){
                right = mid_right-1;
            }
            else if(nums[mid_right]==target){
                left = mid_right+1;
            }
        }
        if(right<0||nums[right]!=target){
            return {-1,-1};
        }
        else{
            mid_right = right;
        }
        return {mid_left,mid_right};
    }
};