class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        for(int i = 0;i<s.size();i++) {
            stack<char> stack;
            while(s[i]!=' '&&i<s.size()) {
                stack.push(s[i]);
                i++;
            }
            while(stack.size()!=0) {
                char c = stack.top();
                stack.pop();
                ans += c;
            }
            ans += " ";
        }
        return ans.substr(0,ans.size()-1);
    }
};