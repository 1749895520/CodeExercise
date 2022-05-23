#include<stdio.h>
int main()
{
    int n;
    int cha;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {printf(" ");}

        cha = 64;

        for(int p=1;p<=i*2-1;p++)
        {
            cha++;
            printf("%c",cha); 
        }
        
        printf("\n");
    }
    return 0;
}