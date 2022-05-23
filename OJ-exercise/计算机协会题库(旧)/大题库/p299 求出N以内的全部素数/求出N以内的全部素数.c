#include<stdio.h>
int main()
{   
    int n;
    int num = 0;
    int false = 0;

    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {false++;}
        }
        if(false==0)
        {
            printf("%d ",i);
            num++;
        }
        if(num%5==0)
        {
            printf("\n");
        }
        false = 0;
    }

    return 0;
}