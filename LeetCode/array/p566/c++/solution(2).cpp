class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int len1 = mat.size(),len2 = mat[0].size();
        if(r*c != len1*len2) {
            return mat;
        }
        vector<vector<int>> ans(r,vector<int>(c));
        for(int i=0;i<r*c;i++) {
            ans[i/c][i%c] = mat[i/len2][i%len2];
        }
        return ans;
    }
};