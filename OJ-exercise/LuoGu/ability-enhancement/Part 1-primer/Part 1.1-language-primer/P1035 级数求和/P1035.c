/*级数求和*/
#include<stdio.h>
int main(void){
    int k;
    scanf("%d",&k);
    double S=0;
    int n=0;
    while(S<=k){
        n++;
        double N = 1/n;
        S += N;
    }
    printf("%d",n);
    return 0;
}