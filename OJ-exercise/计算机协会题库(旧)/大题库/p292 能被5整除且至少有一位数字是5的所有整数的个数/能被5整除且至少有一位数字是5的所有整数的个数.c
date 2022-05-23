#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    int num = 0;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%5==0)
        {
            a = i/10000;
            b = i/1000%10;
            c = i/100%10;
            d = i/10%10;
            e = i%10;

            if(a==5||b==5||c==5||d==5||e==5)
            {
                num++;
            }
        }
    }

    printf("%d",num);
    
    return 0;
}