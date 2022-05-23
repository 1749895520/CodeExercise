#include<stdio.h>
#include<string.h>
int main()
{
    char cha[10][20];
    int i = 0;
    while(gets(cha[i])!='\n')
    {
        i++;
    }

    return 0;
}