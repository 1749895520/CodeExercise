#include<stdio.h>
int main()
{
    int a,b,c;
    int n = 0;

    for(int i=0;i<1000;i++)
    {
        a = i/100;
        b = i/10%10;
        c = i%10;
        if(a==3||b==3||c==3)
        {
            n += 1;
        }
    }

    printf("%d",n);

    return 0;
}