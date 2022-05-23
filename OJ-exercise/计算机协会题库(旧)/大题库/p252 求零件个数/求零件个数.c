#include<stdio.h>
int main()
{
    int n = 100;

    for(n=100;n<200;n++)
    {
        if(n%3==2)
            if(n%5==3)
                if(n%7==5)
                printf("%d",n);
                else
                continue;
            else
            continue;
        else
        continue;
    }

    return 0;
}