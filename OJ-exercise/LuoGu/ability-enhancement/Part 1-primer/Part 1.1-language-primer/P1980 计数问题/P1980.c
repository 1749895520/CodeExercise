/*计数问题*/
#include<stdio.h>
int main(void){
    int n,N,x,num;
    int times = 0;
    scanf("%d %d",&n,&x);
    for(int i=1; i<=n; i++){
        num = i;
        while(num>0){
            N = num%10;
            num /= 10;
            if(N==x){
                times++;
            }
        }

    }
    printf("%d",times);
    return 0;
}