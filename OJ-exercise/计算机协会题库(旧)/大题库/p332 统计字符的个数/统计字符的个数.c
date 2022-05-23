#include<stdio.h>
int main()
{
    int d = 0,x = 0,s = 0;
    int i = 0;
    int cha[20];

    while((cha[i] = getchar())!='#')
    {
        if(cha[i]>=65 && cha[i]<=90)
        {d++;}
        else if(cha[i]>=97 && cha[i]<=122)
        {x++;}
        else
        {s++;}
        i++;
    }

    printf("%d %d %d",d,x,s);

    return 0;
}