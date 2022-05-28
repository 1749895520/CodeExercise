class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size()-1,col = 0;
        while(col < matrix[0].size() && row >= 0) {
            if(matrix[row][col]<target) {
                col++;
            } else if(matrix[row][col]>target) {
                row--;
            } else {
                return true;
            }
        }
        return false;
    }
};