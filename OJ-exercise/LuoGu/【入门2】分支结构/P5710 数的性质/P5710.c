/*数的性质*/
#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    /*判断数字*/
    int charge_1 = 0,charge_2 = 0;
    if(num%2==0){
        charge_1 = 1;
    }
    if(num>4&&num<=12){
        charge_2 = 1;
    }
    /*判断是否成立*/
    int a=0,b=0,c=0,d=0;
    if(charge_1+charge_2==2){
        a=1;
    }
    if(charge_1+charge_2>=1){
        b=1;
    }
    if(charge_1+charge_2==1){
        c=1;
    }
    if(charge_1+charge_2==0){
        d=1;
    }
    /*输出结果*/
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}