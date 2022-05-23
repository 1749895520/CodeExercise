/*Cantor表*/
#include<stdio.h>
int main(void){
    int n;
    int N = 2;
    int a = 0,b = N;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(b==1){
            N++;
            a = 0;
            b = N;
        }
        a++;
        b--;
    }
    printf("%d/%d",a,b);
    return 0;
}