#include<stdio.h>
#include<math.h>
int main()
{
    long n,j;
    int sum = 0;

    scanf("%ld",&n);

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            j = n/i;
            if(i==j)
            {sum = sum+i;}
            else
            {sum = sum+i+j;}
        }
    }
    printf("%d",sum);
}

