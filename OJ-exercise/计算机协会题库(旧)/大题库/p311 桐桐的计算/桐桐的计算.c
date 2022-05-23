#include<stdio.h>
int main()
{
    int a,b,c;
    int num = 0;

    for(a=1;a<=11;a++)
    {
        for(b=1;b<100;b++)
        {
            for(c=1;c<100;c++)
            {
                if(9*a+b+c==100 && 2*a+2*b+4*c==100)
                {
                    num += 1;
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }

    printf("%d\n",num);
    return 0;
}