class Solution {
public:
int change(char c){
    if(c==')')return '(';
    return ' ';
}
    int minAddToMakeValid(string s) {
        stack<char> k;
        for(char c:s){
            if(k.empty()){
                k.push(c);
                continue;
            }
            if(change(c)==k.top()){
                k.pop();
            }else{
                k.push(c);
            }
        }
        return k.size();
    }
};