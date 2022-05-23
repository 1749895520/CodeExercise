/* 高精度加法   */
#include<bits/stdc++.h>
using namespace std;
string a, b;
int s, n;
char sum[550];
int main(void) {
    cin >> a >> b;
    int lenA = a.length() - 1, lenB = b.length() - 1;
    while(lenA>=0&&lenB>=0) {
        sum[n] = s;
        s += lenA >= 0 ? a[lenA--] - '0' : 0;
        s += lenB >= 0 ? b[lenB--] - '0' : 0;
        sum[n++] = (s % 10) + '0';
        s /= 10;
    }
    if(s!=0) {
        cout << s;
    }
    for (int i = n - 1; i >= 0;i--) {
        cout << sum[i];
    }
    return 0;
}