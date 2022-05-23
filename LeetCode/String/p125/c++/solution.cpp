class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c:s) {
            if(isalnum(c)) {
                str += tolower(c);
            }
        }
        string str_(str.rbegin(),str.rend());
        return str == str_;
    }
};