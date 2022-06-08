//
// Created by ZFiend on 2022/6/8.
//
class Solution {
public:
    int myAtoi(string s) {
        int i = 0,ans = 0,sign = 1;
        bool hasSpace = false,hasNum = false;
        while(i<s.size()&&s[i]==' ') {
            hasSpace = true;
            i++;
        }
        if(s[i] == '-') {
            sign = -1;
            i++;
        } else if(s[i] == '+') {
            i++;
        }
        while(s[i]=='0'&&i<s.size()) {
            i++;
        }
        while(s[i]>='0'&&s[i]<='9'&&i<s.size()) {
            if(ans>INT_MAX/10 || (ans==INT_MAX/10 && s[i]-'0'>=7)) {
                ans = INT_MAX;
                break;
            } else if(ans<INT_MIN/10 || (ans==INT_MIN/10 && s[i]-'0'>=8)) {
                ans = INT_MIN;
                break;
            }
            ans *= 10;
            ans += sign*(s[i] - '0');
            i++;
        }
        return ans;
    }
};