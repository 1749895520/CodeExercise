class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numsMap;
        for(int n:nums) {
            if(numsMap.find(n)!=numsMap.end()) {
                return true;
            }
            numsMap.insert(n);
        }
        return false;
    }
};