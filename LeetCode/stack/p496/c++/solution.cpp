class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        stack<int> st;
        unordered_map<int,int> nums1_map;
        int len1 = nums1.size(), len2 = nums2.size();
        for(int i=0;i<len1;i++) {
            nums1_map[nums1[i]] = i;
        }
        for(int i = len2-1;i>=0;i--) {
            if(nums1_map.find(nums2[i])!=nums1_map.end()) {
                while(!st.empty() && st.top()<=nums2[i]) {
                    st.pop();
                }
                ans[nums1_map[nums2[i]]] = st.empty() ? -1 : st.top();
                st.push(nums2[i]);
            } else {
                st.push(nums2[i]);
            }
        }
        return ans;
    }
};