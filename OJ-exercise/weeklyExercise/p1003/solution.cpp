/*  ±¿×¾µÄÊÖÖ¸  */
#include<bits/stdc++.h>
#define MAXN 1050
using namespace std;
string s1, s2;
unordered_map<int, bool> ans;
int res;
int toDecimal(string s, int n);
void types(int n,string s) {
    for (int i = 0;i<s.length();i++){
        int temp = s[i];
        for (int j = 0; j < n;j++){
            if(s[i]!=j+'0'){
                s[i] = j+'0';
                int num = toDecimal(s,n);
                if(ans.find(num)!=ans.end()&&ans[num]) {
                    res = num;
                    return;
                }
                ans[num] = true;
                s[i] = temp;
            }
        }
    }
}
int toDecimal(string s,int n) {
    int num = s[0]-'0';
    for (int i = 1;i<s.length();i++){
        num *= n;
        num += s[i] - '0';
    }
    return num;
}
int main(void) {
    cin >> s1 >> s2;
    types(2, s1);
    types(3, s2);
    cout << res;
    return 0;
}