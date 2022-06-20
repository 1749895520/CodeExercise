class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        for(auto &N:bookings){
            ans[N[0]-1] += N[2];
            if(N[1]<n){
                ans[N[1]] -= N[2];
            }
        }
        for(int i=1;i<n;i++){
            ans[i]+=ans[i-1];
        }
        return ans;
    }
};