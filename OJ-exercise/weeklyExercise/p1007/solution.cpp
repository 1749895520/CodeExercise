/*  女神的数字游戏  */
#include<bits/stdc++.h>
using namespace std;
int A, sum, x;
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
int main(void) {
    cin >> A;
    for(int i = 2; i < A; i++) {
        int num = A;
        while(num>0) {
            sum += num % i;
            num /= i;
        }
    }
    x = gcd(sum, A - 2);
    printf("%d/%d", sum / x, (A - 2) / x);
}