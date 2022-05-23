#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    int s = a / b;
    int y = a % b;

    printf("%d %d",s,y);
    
    return 0;
}