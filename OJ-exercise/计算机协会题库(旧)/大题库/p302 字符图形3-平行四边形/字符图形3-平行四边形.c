#include<stdio.h>
int main()
{
    int n,i,j;
    int hang;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }

        for(hang=1;hang<=n;hang++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}