class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        int m = matrix.length,n = matrix[0].length;
        int top = 0,btm = m-1,left = 0,right = n-1;
        while(ans.size()<m*n) {
            for(int i=left;i<=right && top<=btm;i++) {
                ans.add(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=btm && left<=right;i++) {
                ans.add(matrix[i][right]);
            }
            right--;
            for(int i=right;i>=left && top<=btm;i--) {
                ans.add(matrix[btm][i]);
            }
            btm--;
            for(int i=btm;i>=top && left<=right;i--) {
                ans.add(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
}