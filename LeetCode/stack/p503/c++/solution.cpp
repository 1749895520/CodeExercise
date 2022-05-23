class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size());
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--) {
            while(!st.empty() && st.top()<=nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? search(nums,i) : st.top();
            st.push(nums[i]); 
        }
        return ans;
    }
    int search(vector<int>& nums,int n) {
        for(int i=0;i<n;i++) {
            if(nums[i]>nums[n]) {
                return nums[i];
            }
        }
        return -1;
    }
};