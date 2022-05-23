#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    int i;

    scanf("%s",&num);

    for(i=0;i<strlen(num);i++)
    {
        if(num[i]=='O')
        {num[i] = '0';continue;}
        
        if(num[i]=='l')
        {num[i] = '1';continue;}
        
        if(num[i]=='Z')
        {num[i] = '2';continue;}
        
        if(num[i]=='S')
        {num[i] = '5';continue;}

        if(num[i]=='b')
        {num[i] = '6';continue;}

        if(num[i]=='B')
        {num[i] = '8';continue;}

        if(num[i]=='q')
        {num[i] = '9';continue;}
    }

    printf("%s",num);

    return 0;
}