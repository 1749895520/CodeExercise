/*  Ó×°²Ö®Í´    */
#include<bits/stdc++.h>
using namespace std;
int ton[27], n, maxC;
char c;
int main(void) {
    cin >> n;
    while(n--) {
        cin >> c;
        ton[c-96]++;
    }
    for (int i = 1; i < 27;i++) {
        if(maxC<ton[i]) {
            maxC=ton[i];
            c = i + 96;
        }
    }
    cout << c << " " << maxC;
    return 0;
}