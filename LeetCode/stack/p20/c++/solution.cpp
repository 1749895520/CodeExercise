class Solution {
public:
    char charge(char aph){
        if(aph==')') return '(';
        if(aph=='}') return '{';
        if(aph==']') return '[';
        return '\0';
    }
    bool isValid(string s) {
        stack<char> c;
        c.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(c.empty()){
                c.push(s[i]);
                continue;
            }
            if(charge(s[i])==c.top()){
                c.pop();
            }
            else{
                c.push(s[i]);
            }
        }
        if(c.empty()){
            return true;
        }
        return false;
    }
};