#include<stdio.h>
int main()
{
    int g,s,b,q,num;

    scanf("%d",&num);

    q = num / 1000;
    b = num / 100 - q * 10;
    s = num / 10 - q * 100 - b * 10;
    g = num % 10;

    num = q + b * 10 + s * 100 + g * 1000;

    printf("%d",num);
    
    return 0;
}