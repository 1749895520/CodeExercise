class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int len1 = mat.size(),len2 = mat[0].size();
        if(r*c != len1*len2) {
            return mat;
        }
        vector<vector<int>> ans(r,vector<int>(c));
        int n = 0,m = 0;
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                ans[i][j] = mat[n][m++];
                if(m==len2) {
                    n++;
                    m = 0;
                }
            }
        }
        return ans;
    }
};