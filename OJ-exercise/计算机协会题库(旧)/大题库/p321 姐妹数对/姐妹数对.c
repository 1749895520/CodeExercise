#include<stdio.h>
int main()
{
    int x,y,n;
    int num = 0;

    scanf("%d",&n);

    for(x=1;x<=n;x++)
    {
        for(y=1;y<=n;y++)
        {
            if(x!=y)
            {
            if((x+y)%3==0||(x+y)%7==0)
                {num++;}
            }
        }
    }
    printf("%d",num/2);

    return 0;
}