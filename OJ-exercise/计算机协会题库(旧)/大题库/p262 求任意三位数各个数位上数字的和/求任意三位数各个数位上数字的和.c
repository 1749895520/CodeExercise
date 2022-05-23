#include<stdio.h>
int main()
{
    int num,g,s,b;

    scanf("%d",&num);

    b = num / 100;
    s = num / 10 - b * 10;
    g = num % 10;

    num = g + s + b;

    printf("%d",num);
    
    return 0;
}