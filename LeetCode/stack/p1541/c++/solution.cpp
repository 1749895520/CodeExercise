class Solution {
public:
    int minInsertions(string s) {
        int left = 0,right = 0;
        for(char c:s) {
            if(c=='('){
                right += 2;
            if(right%2==1){
                left++;
                right--;
            }
            }else{
                right--;
            }
            if(right==-1){
                left++;
                right = 1;
            }
        }
        return left+right;
    }
};