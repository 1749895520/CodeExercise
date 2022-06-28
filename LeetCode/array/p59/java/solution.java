class Solution {
    public int[][] generateMatrix(int n) {
        int[][] ans = new int[n][n];
        ans[0][0] = 1;
        int i = 0,j = 0,num = 2;
        while(num<=n*n) {
            while(++j<n && ans[i][j]==0) {
                ans[i][j] = num++;
            }
            j--;
            while(++i<n && ans[i][j]==0) {
                ans[i][j] = num++;
            }
            i--;
            while(--j>=0 && ans[i][j]==0) {
                ans[i][j] = num++;
            }
            j++;
            while(--i>=0 && ans[i][j]==0) {
                ans[i][j] = num++;
            }
            i++;
        }
        return ans;
    }
}