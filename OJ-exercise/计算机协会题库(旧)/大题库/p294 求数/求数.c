#include<stdio.h>
int main()
{
    int a,b,c;

    for(int i=1;i<=999;i++)
    {
        if(i%3==0)
        {
            a = i/100;
            b = i/10%10;
            c = i%10;
            if(a==5||b==5||c==5)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}