#include<stdio.h>
int main()
{
    int m,n;
    int num = 0;

    scanf("%d %d",&m,&n);

    for(int i=m;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                num += 1;break;
            }

        }
    }

    num = (n-m+1) - num;

    printf("%d",num);

    return 0;
}