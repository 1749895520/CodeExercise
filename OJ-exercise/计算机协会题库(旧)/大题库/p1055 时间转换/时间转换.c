#include<stdio.h>
int main(void)
{
    int time;
    scanf("%d",&time);

    int hour,minute,second;

    hour = time/3600;
    time %= 3600;

    minute = time/60;
    time %= 60;

    second = time;

    printf("%d:%d:%d",hour,minute,second);
    
    return 0;
}