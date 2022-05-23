#include<stdio.h>
int main()
{
    int i;
    int height = 100;

    for(i=1;;i++)
    {
        height /= 2.0;
        if(height<0.5)
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}