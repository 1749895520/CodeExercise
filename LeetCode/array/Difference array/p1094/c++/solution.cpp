class Solution {
public:
    int station[1010],passagers = 0;
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        for(int i=0;i<trips.size();i++){
            station[trips[i][1]] += trips[i][0];
            station[trips[i][2]] -= trips[i][0];
        }
        for(int i=0;i<1000;i++){
            passagers += station[i];
            if(passagers>capacity){
                return false;
            }
        }
        return true;
    }
};