#include<stdio.h>
int main()
{
    for(int i=97;i<=122;i++)
    {
        if((i-97)%13==0)
        {printf("\n");}
        printf("%c",(char)i);
    }
    for(int j=122;j>=97;j--)
    {
        if((j-96)%13==0)
        {printf("\n");}
        printf("%c",(char)j);
    }
    return 0;
}