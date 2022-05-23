#include<stdio.h>
int main()
{
    int n,i,j,space;
    int num = 1;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        
        for(j=1;j<=i*2-1;j++)
        {
            printf("%d",num);
            num++;
        }
        num = 0;

        printf("\n");
    }
    return 0;
}