#include<stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a<b){a = a+b;b = a-b;a = a-b;}
    if(a<c){a = a+c;c = a-c;a = a-c;}
    if(a<d){a = a+d;d = a-d;a = a-d;}
    if(b<c){b = b+c;c = b-c;b = b-c;}
    if(b<d){b = b+d;d = b-d;b = b-d;}
    if(c<d){c = c+d;d = c-d;c = c-d;}

    if(a-b==2 && b-c==2 && c-d==2)
    printf("%d+2=%d\n%d+2=%d\n%d+2=%d",d,c,c,b,b,a);
    else
    printf("%d %d %d %d",a,b,c,d);

    return 0;
}