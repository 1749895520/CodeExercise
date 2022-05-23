#include<stdio.h>
int main()
{
    int n,i;

    scanf("%d",&n);

    while(1)
    {
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d\n",i);
                n /= i;
                break;
            }
        }
    }

    return 0;
}