#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    if(n<10)
    printf("A");
    if(n>=10&&n<20)
    printf("B");
    if(n>=20&&n<40)
    printf("C");
    if(n>=40&&n<50)
    printf("D");
    if(n>=50&&n<80)
    printf("E");
    
    return 0;
}