#include<stdio.h>
int main()
{
    int n;
    int m = 0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%3==2 && i%5==3 && i%7==2)
        {
            m += 1;
        }
    }

    printf("%d",m);
    
    return 0;
}