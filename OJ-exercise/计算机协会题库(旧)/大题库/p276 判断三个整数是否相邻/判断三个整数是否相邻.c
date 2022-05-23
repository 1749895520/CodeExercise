#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(((a+b+c)/3==a || (a+b+c)/3==b || (a+b+c)/3==c) && (a-b == 1||b-c == 1||c-a == 1))
    printf("TRUE");
    else
    printf("FALSE");

    return 0;
}