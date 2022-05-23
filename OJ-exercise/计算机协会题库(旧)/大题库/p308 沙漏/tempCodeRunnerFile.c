#include<stdio.h>
int main()
{
    int n,i,j,space;

    scanf("%d",&n);
    n = (n+1)/2;

    /*  下半部分    */
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=i;space++)
        {
            printf(" ");
        }

        for(j=1;j<=2*(n-i+1)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*  上半部分    */
    for(i=1;i<n;i++)
    {
        for(space=0;space<n-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*(i+1)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}