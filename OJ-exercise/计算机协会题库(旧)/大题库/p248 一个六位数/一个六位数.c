#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int num_1,num_2;
    
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            for(c=1;c<=9;c++)
            {
                for(d=1;d<=9;d++)
                {
                    for(e=1;e<=9;e++)
                    {
                        num_1 = a*100000 + b*10000 + c*1000 + d*100 + e*10 + 7;
                        num_2 = 700000 + a*10000 + b*1000 + c*100 + d*10 + e;

                        if(num_1*4 == num_2)
                        {
                            printf("%d",num_1);break;
                        }

                    }
                }
            }
        }
    }
    return 0;
}