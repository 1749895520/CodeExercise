#include<stdio.h>
int main(void) {
    int ans = 0;
    for(int i=704;i<=2022;i++) {
        if((i%400==0)||(i%100!=0&&i%4==0)) {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}