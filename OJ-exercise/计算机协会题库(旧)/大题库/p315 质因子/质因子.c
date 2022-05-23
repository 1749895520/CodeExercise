#include<stdio.h>
int main()
{
    int n;
    int i = 2;

    scanf("%d",&n);

    while(i<=n)
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