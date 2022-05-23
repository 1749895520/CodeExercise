#include<stdio.h>
int main()
{
    int x;
    float s = 0.0;

    scanf("%d",&x);

    for(int i=1;;i++)
    {
        s = s + 1.0/i;
        if(s>x)
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}