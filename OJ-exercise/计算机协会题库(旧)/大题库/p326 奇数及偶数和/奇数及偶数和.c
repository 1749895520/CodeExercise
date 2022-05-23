#include<stdio.h>
int main()
{
    int n,ji,ou,sum;

    scanf("%d",&n);

    sum = (1+n)*n/2;

    if(n%2==0)
    {
        ji = n*n/4;
        ou = (n*(n+2))/4;
    }
    if(n%2==1)
    {
        ji = (n+1)*(n+1)/4;
        ou = (n*n-1)/4;
    }
    printf("%d %d",ji,ou);

    return 0;
}