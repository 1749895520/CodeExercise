#include<stdio.h>
int main()
{
    int n,m;

    scanf("%d %d",&n,&m);

    for(int i=0;i<=n/5;i++)
    {
        for(int j=0;j<=n/3;j++)
        {
            for(int x=0;x<=n*3;x+=3)
            {
                if(i*5+j*3+x/3==n && i+j+x==m)
                {printf("%d %d %d\n",i,j,x);}
            }
        }
    }
    return 0;
}