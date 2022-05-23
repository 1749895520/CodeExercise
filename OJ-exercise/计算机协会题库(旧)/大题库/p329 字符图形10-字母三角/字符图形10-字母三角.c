#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {printf(" ");}
        
        for(int p=1;p<=i*2-1;p++)
        {printf("%c",i+64);}

        printf("\n");
    }
    return 0;
}