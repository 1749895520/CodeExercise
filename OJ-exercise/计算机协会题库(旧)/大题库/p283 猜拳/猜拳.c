#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    if((a==1&&b==1)||(a==2&&b==2)||(a==3&&b==3))
    printf("tie");
    if((a==1&&b==2)||(a==2&&b==3)||(a==3&&b==1))
    printf("win");
    if((a==2&&b==1)||(a==3&&b==2)||(a==1&&b==3))
    printf("lose");

    return 0;
}