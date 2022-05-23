#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,d_,q;

    scanf("%d %d %d",&a,&b,&c);

    if((a+c)/2==b)
    {
        d_ = b-a;
        d = c+d_;
        e = d+d_;
        f = e+d_;
    }
    if((a*c)==b*b)
    {
        q = b/a;
        d = c*q;
        e = d*q;
        f = e*q;
    }

    printf("%d %d %d",d,e,f);
    
    return 0;
}