/*多组数求和*/
#include<stdio.h>
int main(void){
    int a,b;
    int num[7];
    int day,charge=1;
    for(int i=0;i<7;i++){
        scanf("%d %d",&a,&b);
        num[i]=a+b;
        if(num[i]>=9&&charge==1){
            day = i+1;
            charge = 0;
        }
    }
    printf("%d",day);
    return 0;
}