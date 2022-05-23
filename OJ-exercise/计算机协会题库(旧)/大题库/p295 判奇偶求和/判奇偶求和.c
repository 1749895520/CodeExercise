#include<stdio.h>
int main()
{
    int n;
    int num = 0;

    scanf("%d",&n);

    if(n%2==1)
    printf("%d",(n*n-1)/4);
    if(n%2==0)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            num += i;
        }
    }

    printf("%d",num);
    
    return 0;
}