#include<stdio.h>
int main()
{
    long long n,sum;

    scanf("%lld",&n);

    sum = (1 + n) * n / 2;

    printf("%lld",sum);
    
    return 0;
}