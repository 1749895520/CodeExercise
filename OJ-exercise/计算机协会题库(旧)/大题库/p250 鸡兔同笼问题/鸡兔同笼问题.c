#include<stdio.h>
int main()
{
    int heads = 50;
    int legs = 160;
    int ch,ra;

    for(ch=0;ch<=heads;ch++)
    {
        ra = heads - ch;
        if(ch*2 + ra*4 == 160)
        printf("%d %d",ch,ra);
        else
        continue;
    }

    return 0;
}