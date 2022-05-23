#include<stdio.h>
int main()
{
    
    double r,s;
    double pi = 3.141592653589793238;

    scanf("%lf",&r);

    s = pi * r * r;

    printf("%.7f",s);       //保留七位小数

    return 0;
}