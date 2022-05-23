class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX,maxEarn = 0;
        for(int n:prices) {
            minPrice = min(minPrice,n); //记录到目前天数为止的最低价格
            int earn = n - minPrice;    //记录如果在当前天数卖出最多能赚多少
            maxEarn = max(maxEarn,earn);//求出能赚的最多的钱
        }
        return maxEarn;
    }
};