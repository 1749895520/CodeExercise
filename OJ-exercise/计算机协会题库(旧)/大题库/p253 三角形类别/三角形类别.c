#include<stdio.h>
int main()
{
    int a,b,c,d;
    
    scanf("%d %d %d",&a,&b,&c);

    if(a<b)
    {
        d = a;
        a = b;
        b = d;
    }

    if(a<c)
    {
        d = a;
        a = c;
        c = d;
    }

    if(b<c)
    {
        d = b;
        b = c;
        c = d;
    }

    if(b+c>a)
    {
        if(b*b+c*c==a*a)
        printf("zhijiao");
        if(b*b+c*c<a*a)
        printf("dunjiao");
        if(b*b+c*c>a*a)
        printf("ruijiao");
    }
    else
    printf("no");

    return 0;
}