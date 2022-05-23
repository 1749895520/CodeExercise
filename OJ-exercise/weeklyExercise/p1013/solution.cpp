#include<stdio.h>
int n;
long long ans = 1;
int main(void) {
    scanf("%d",&n);
    while(n--){
        ans += (long long)2 << n;
    }
    printf("%lld",ans);
    return 0;
}