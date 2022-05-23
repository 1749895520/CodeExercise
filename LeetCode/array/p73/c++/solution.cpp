class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int zeroMap[40000][2],num = 0;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[0].size();j++) {
                if(matrix[i][j] == 0) {
                    zeroMap[num][0] = i;
                    zeroMap[num++][1] = j;
                }
            }
        }
        for(int i=0;i<num;i++) {
            int key = zeroMap[i][0];
            int val = zeroMap[i][1];
            for(int j=0;j<matrix[0].size();j++) {
                matrix[key][j] = 0;
            }
            for(int j=0;j<matrix.size();j++) {
                matrix[j][val] = 0;
            }
        }
    }
};