#include<stdio.h>
int main()
{
    long n;

    scanf("%ld",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);

            return 0;
        }
    }

    printf("Yes");

    return 0;
}