#include<stdio.h>
int main()
{
    int g,m,x;

    for(g=1;g<=100;g++)
    {
        for(m=1;m<=100;m++)
        {
            for(x=1;x<=100;x++)
            {
                if(g + m + x == 100 && 5*g + 3*m + x/3 == 100 && x%3 == 0)
                printf("%d %d %d\n",g,m,x);
            }
        }
    }
    return 0;
}