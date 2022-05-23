#include<stdio.h>
int main()
{
    int n;
    int j = 1;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        j = 1;
    }
    return 0;
}