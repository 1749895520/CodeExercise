#include<stdio.h>
int main()
{
    int m,n,num;

    scanf("%d %d",&m,&n);

    if(m%n!=0)
    num = m/n + 1;
    else
    num = m/n;

    printf("%d",num);
    
    return 0;
}