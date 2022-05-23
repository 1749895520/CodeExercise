class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxCash = 0;
        for(int i=0;i<accounts.size();i++) {
            int cash = 0;
            for(int j=0;j<accounts[0].size();j++) {
                cash += accounts[i][j];
            }
            maxCash = maxCash > cash ? maxCash : cash;
        }
        return maxCash;
    }
};