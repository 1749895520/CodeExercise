class Solution {
public:
    int map[1005],p1 = 0,p2 = 0;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        while(p2<nums2.size()) {
            map[nums2[p2++]]++;
        }
        while(p1<nums1.size()) {
            if(map[nums1[p1]]>0) {
                ans.push_back(nums1[p1]);
                map[nums1[p1]]--;
            }
            p1++;
        }
        return ans;
    }
};