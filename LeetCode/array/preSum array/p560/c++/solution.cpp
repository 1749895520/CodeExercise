class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum = 0,ans = 0;
        unordered_map<int,int> map;
        map[0]=1;
        for(auto& i:nums){
            preSum += i;
            if(map.find(preSum-k)!=map.end()){
                ans += map[preSum-k];
            }
            map[preSum]++;
        }
        return ans;
    }
};