#include<stdio.h>
int main()
{
    int kg,mon;

    scanf("%d",&kg);

    if(kg<=10)
    {
        printf("2.50");
    }
    else
    {
        printf("%.2f",2.5 + (kg-10)*1.5);
    }
    return 0;
}