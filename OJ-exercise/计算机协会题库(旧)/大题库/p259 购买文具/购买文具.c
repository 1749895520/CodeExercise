#include<stdio.h>
int main()
{
    int y,q,x,N;
    int n = 0;

    scanf("%d",&N);

    N = N*10;

    for(y=1;y*8<=N;y++)
    {
        for(q=1;q*2<=N;q++)
        {
            for(x=1;x<=N;x++)
            {
                if(y+q+x>30 && 8*y + 2*q + x == N)
                {
                    n += 1;
                }
            }
        }
    }

    printf("%d",n);

    return 0;
}