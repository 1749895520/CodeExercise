#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    n = (n*(n+1)*(2*n+1))/6;
    
    printf("%d",n);

    return 0;
}