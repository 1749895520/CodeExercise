class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> index;
        for(int i=0;i<numbers.size();i++) {
            int find = target - numbers[i];
            if(index.find(find)!=index.end()) {
                return {index[find],i+1};
            }
            index[numbers[i]] = i+1;
        }
        return {0,0};
    }
};