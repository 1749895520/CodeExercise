class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> i_map;
        for(int i=0;i<nums.size();i++){
            int i_second = target-nums[i];
            if(i_map.find(i_second)!=i_map.end()){
                return {i_map[i_second],i};
            }
            i_map.insert(pair<int, int>(nums[i], i));
        }
        return {0,0};
    }
};