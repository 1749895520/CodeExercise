#include<stdio.h>
int main()
{
    int X,A,B;
    int n = 0;

    scanf("%d %d %d",&X,&A,&B);

    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(i * A + j * B == X)
            {
                n += 1;
            }
        }
    }

    printf("%d",n);
    
    return 0;
}