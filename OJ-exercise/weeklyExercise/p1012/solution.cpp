#include<bits/stdc++.h>
using namespace std;
string str;
int left,right,maxLen,posL,posR;
unordered_map<char,int> window;
int main(void) {
    cin >> str;
    while(right<str.size()) {
        char come = str[right++];
        if(window.find(come)==window.end()) {
            window[come]++;
        } else {
            if(maxLen<(right-left+1)) {
                maxLen = right - left + 1;
                posL = left;
                posR = right;
            }
            while(window.count(come)>1) {
                char go = str[left++];
                window[go]--;
            }
        }
    }
    cout << posL << " " << posR;
    return 0;
}