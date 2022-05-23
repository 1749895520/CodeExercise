/*上学迟到*/
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
    printf("0%d:%d",8-hour,60-minute);
    return 0;
}