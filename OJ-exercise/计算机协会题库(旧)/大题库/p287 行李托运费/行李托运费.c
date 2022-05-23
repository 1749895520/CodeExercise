#include<stdio.h>
int main()
{
    float kg;
    int mon;

    scanf("%d",&mon);

    if(mon<=15)
    {
        kg = mon/1.5;
        printf("%.2f",kg);
    }
    else
    {
        kg = 10 + (mon-15)/2.5;
        printf("%.2f",kg);
    }
    return 0;
}