#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10][10],ch_1[10];
    char (*p)[10] = ch,(*p_1) = ch_1;
    int i = 0,j = 0,num = 0;
    int a = 0,b = 0;
    while((*(*(p+i)+j) = getchar()) != '.')
    {
        if(*(*(p+i)+j)!=' ')
        {j++;num++;}
        else
        {*(*(p+i)+j) = '\0';i++;j = 0;}
    }
    *(*(p+i)+j) = '\0';

    scanf("\n");

    gets(ch_1);

    for(b=0;b<=i;b++)
    {
        if(strcmp(ch_1,ch[b])==0)
        {printf("%d",b+1);return 0;}
    }
    printf("%d",num);

    return 0;
}