#include<stdio.h>
int main()
{
    int a,b,c;
    float S;

    scanf("%d %d %d",&a,&b,&c);

    if(a<b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if(a<c)
    {
        a = a+c;
        c = a-c;
        a = a-c;
    }
    if(b<c)
    {
        b = b+c;
        c = b-c;
        b = b-c;
    }

    if(a*a == b*b + c*c)
    printf("%.1f",b*c/2.0);
    else
    printf("No");
    
    return 0;
}