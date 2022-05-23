class Solution {
public:
    int minDistance = INT_MAX,minIndex = -1;
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        for(int i=0;i<points.size();i++) {
            if(points[i][0]==x) {
                charge(abs(points[i][1]-y),i);
            } else if(points[i][1]==y) {
                charge(abs(points[i][0]-x),i);
            }
        }
        return minIndex;
    }
    void charge(int distance,int i) {
        if(distance<minDistance) {
            minDistance = distance;
            minIndex = i;
        }
    }
};