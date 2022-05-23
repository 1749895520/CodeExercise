#include<stdio.h>
int main()
{
    int num;

    scanf("%d",&num);

    if(num>=86)
    printf("VERY GOOD");
    else if(num>=60 && num<86)
    printf("GOOD");
    else
    printf("BAD");

    return 0;
}