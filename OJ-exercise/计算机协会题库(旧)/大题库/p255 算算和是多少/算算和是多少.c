#include<stdio.h>
int main()
{
    int g,s,b,num,num2;

    scanf("%d",&num);

    b = num/100;
    s = num/10 - b*10;
    g = num%10;

    num2 = b + s*10 + g*100; 

    printf("%d",(num + num2));

    return 0;
}