#include<stdio.h>
int main()
{
    int a,b,c,d;
    int n = 0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a<60||b<60||c<60||d<60)
    {printf("Poor LanYangYang");return 0;}
    if(a>=90&&b>=90&&c>=90&&d>=90)
    {printf("5");return 0;}

    if(a>=90){n += 1;}
    if(b>=90){n += 1;}
    if(c>=90){n += 1;}
    if(d>=90){n += 1;}

    printf("%d",n);

    return 0;
}