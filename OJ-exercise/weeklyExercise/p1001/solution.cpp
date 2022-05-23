/*  ì³²¨ÄÇÆõÊýÁÐ    */
#include<bits/stdc++.h>
using namespace std;
int n,f1 = 1,f2 = 1,f = 1;
int main(void) {
    cin>>n;
    while(n-->2) {
        f = (f1+f2)%10007;
        f1 = f2;
        f2 = f;
    }
    cout << f;
    return 0;
}