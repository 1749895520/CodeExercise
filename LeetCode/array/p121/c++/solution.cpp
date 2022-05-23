class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX,maxEarn = 0;
        for(int n:prices) {
            minPrice = min(minPrice,n); //��¼��Ŀǰ����Ϊֹ����ͼ۸�
            int earn = n - minPrice;    //��¼����ڵ�ǰ�������������׬����
            maxEarn = max(maxEarn,earn);//�����׬������Ǯ
        }
        return maxEarn;
    }
};