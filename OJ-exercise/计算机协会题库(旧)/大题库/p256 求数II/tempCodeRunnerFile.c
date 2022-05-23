#include<stdio.h>
int main()
{
    int n;

    for(n=1;n<500;n++)
    {
        if(n%3==2)
            if(n%5==2)
                if(n%7==2)
                printf("%d\n",n);
                else
                continue;
            else
            continue;
        else
        continue;
    }
    return 0;
}