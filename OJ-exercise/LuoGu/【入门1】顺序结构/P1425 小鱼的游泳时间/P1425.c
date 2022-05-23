/*小鱼的游泳时间*/
#include<stdio.h>
int main(void){
    int hour_1,hour_2,minute_1,minute_2;
    scanf("%d %d %d %d",&hour_1,&minute_1,&hour_2,&minute_2);
    int minute =((60-minute_1) + minute_2)%60;
    int hour = hour_2-hour_1-1 + ((60-minute_1) + minute_2)/60;
    printf("%d %d",hour,minute);
    return 0;
}