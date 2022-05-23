#include<stdio.h>
int main()
{
    int time,a,b,c;
    
    scanf("%d",&time);
    
    a = time/3600;
    time = time%3600;
    b = time/60;
    time = time%60;
    c = time;
    
    printf("%02d:%02d:%02d",a,b,c);

    return 0;
}