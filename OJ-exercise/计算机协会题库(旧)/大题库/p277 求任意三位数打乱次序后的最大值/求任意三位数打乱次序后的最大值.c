#include<stdio.h>
int main()
{
    int b,s,g,num;

    scanf("%d",&num);

    b = num/100;
    s = num/10%10;
    g = num%10;

    if(b<s)
    {
        b = b+s;
        s = b-s;
        b = b-s;
    }

    if(b<g)
    {
        b = b+g;
        g = b-g;
        b = b-g;
    }

    if(s<g)
    {
        s = s+g;
        g = s-g;
        s = s-g;
    }

    printf("%d%d%d",b,s,g);
    
    return 0;
}