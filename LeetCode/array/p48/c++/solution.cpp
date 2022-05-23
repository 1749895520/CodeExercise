class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp = 0;
        for(int i=0,i_=matrix.size()-i-1;i<matrix.size()/2;i++,i_--) {
            for(int j=0;j<matrix[0].size();j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i_][j];
                matrix[i_][j] = temp;
            }
        }
        for(int i=0;i<matrix.size();i++) {
            for(int j=i+1;j<matrix[0].size();j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};