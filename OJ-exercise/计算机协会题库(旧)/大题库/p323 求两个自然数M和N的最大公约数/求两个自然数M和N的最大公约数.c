#include<stdio.h>
int main()
{
    long m,n;

    scanf("%ld %ld",&m,&n);

    if(m>n)
    {
        m = m+n;
        n = m-n;
        m = m-n;
    }
    for(long i=m;;i--)
    {
        if(m%i==0&&n%i==0)
        {printf("%ld",i);break;}
    }
    return 0;
}