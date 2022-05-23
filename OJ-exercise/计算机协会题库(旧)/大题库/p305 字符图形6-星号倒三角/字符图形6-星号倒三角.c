#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j_1=1;j_1<=i;j_1++)
        {
            printf(" ");
        }

        for(int j_2=1;j_2<=2*(n-i)-1;j_2++)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}