#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    //1号小朋友
    a = a/3;
    b = b + a;
    e = e + a;

    //2号小朋友
    b = b/3;
    a = a + b;
    c = c + b;

    //3号小朋友
    c = c/3;
    b = b + c;
    d = d + c;

    //4号小朋友
    d = d/3;
    c = c + d;
    e = e + d;

    //5号小朋友
    e = e/3;
    a = a + e;
    d = d + e;

    printf("%d %d %d %d %d\n",a,b,c,d,e);

    return 0;
}