#include<stdio.h>
int main(void){
    float money,rate;
    scanf("%f %f",&money,&rate);

    double money_ = money + (money*rate/100*0.8);
    printf("%.2f",money_);
    return 0;
}