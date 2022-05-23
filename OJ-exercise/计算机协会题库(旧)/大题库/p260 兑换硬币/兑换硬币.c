#include<stdio.h>
int main()
{
    int one,two,five;
    int n = 0;

    for(one=1;one<=100;one++)
    {
        for(two=1;two<=50;two++)
        {
            for(five=1;five<=20;five++)
            {
                if(one + two*2 + five*5 == 100)
                {
                    n += 1;
                }
            }
        }
    }

    printf("%d",n);
    return 0;
}