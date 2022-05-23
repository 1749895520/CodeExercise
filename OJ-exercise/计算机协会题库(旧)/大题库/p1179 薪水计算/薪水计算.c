/*计算工作薪水*/
#include<stdio.h>
int main(void){
    float houly_pay,salary;
    int time;
    scanf("%d %f",&time,&houly_pay);

    if(time<=40){
        salary = time*houly_pay;
    }
    else if(time<=50){
        salary = 40*houly_pay + (time-40)*houly_pay*1.5;
    }
    else if(time>50){
        salary = 55*houly_pay + (time-50)*houly_pay*2; 
    }

    printf("%.2f",(float)salary);
    return 0;
}