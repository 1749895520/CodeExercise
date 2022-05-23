#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i++)
    {
        if(i==1||i==2*n-1)
        {
            for(int j_1=1;j_1<n;j_1++)
            {
                printf(" ");
            }
            for(int x_1=0;x_1<n;x_1++)
            {
                printf("*");
            }
            for(int j_1=1;j_1<n;j_1++)
            {
                printf(" ");
            }

            printf("\n");
        }
        else if(i>1&&i<=n)
        {
            for(int j_2=1;j_2<=n-i;j_2++)
            {
                printf(" ");
            }

            printf("*");

            for(int x_2=0;x_2<n+(i-2)*2;x_2++)
            {
                printf(" ");
            }

            printf("*");
            printf("\n");
        }
        else
        {
            for(int j_3=0;j_3<i-n;j_3++)
            {
                printf(" ");
            }

            printf("*");

            for(int x_3=0;x_3<n+(n-2)*2-(i-n)*2;x_3++)
            {
                printf(" ");
            }

            printf("*");
            printf("\n");
        }
    }

    return 0;
}