/*ÉÏÑ§³Ùµ½*/
#include<stdio.h>
int main(void){
    int s,v;
    scanf("%d %d",&s,&v);
    int time = s/v+10;
    if(s%v!=0){
        time++;
    }
    int hour = time/60;
    int minute = time%60;
    int hour_ = 8-hour;
    int minute_;
    if(minute==0){
        minute_=0;
    }
    else{
        minute_=60-minute;
        hour_--;
    }
        while(hour_<0){
        hour_ += 24;
    }
    printf("%02d:%02d",hour_,minute_);
    return 0;
}