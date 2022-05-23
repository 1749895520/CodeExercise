#include<stdio.h>
int main()
{
    int n,num_1,num_2;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {printf(" ");}

        num_1 = 65+i;

        for(int p=1;p<=i;p++)
        {
            num_1--;
            printf("%c",num_1);
        }

        num_2 = 65;

        for(int q=1;q<i;q++)
        {
            num_2++;
            printf("%c",num_2);
        }
        printf("\n");
    }
    return 0;
}