class Solution {
    public int minAddToMakeValid(String s) {
        int left = 0,right = 0;
        for(int i=0;i<s.length();i++) {
            if(s.charAt(i)=='('){
                left++;
            }else if(s.charAt(i)==')'){
                left--;
            }
            if(left==-1){
                right++;
                left++;
            }
        }
        return left+right;
    }
}