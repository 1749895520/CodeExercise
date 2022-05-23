public class Solution {
    public int minInsertions(String s) {
        int left = 0,right = 0;
        for(int i = 0;i<s.length();i++) {
            if(s.charAt(i)=='(') {
                right += 2;
                if(right%2==1) {
                    left++;
                    right--;
                }
            }
            if(s.charAt(i)==')') {
                if(--right == -1) {
                    left++;
                    right = 1;
                }
            }
        }
        return left+right;
    }
}class solution {
    
}
