#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int num=a;
    while(1){
        if(num%b==0&&num%c==0){
            break;
        }
        num += a;
    }
    printf("%d",num);
    return 0;
}