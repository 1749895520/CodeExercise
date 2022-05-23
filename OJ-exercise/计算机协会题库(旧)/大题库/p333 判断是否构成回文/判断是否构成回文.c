#include<stdio.h>
#include<math.h>
int main()
{
    int num[100];
    int i = 0;
    int p = 0;
    while((num[i] = getchar())!='.')
    {
        num[i] = num[i]-'0';
        i++;
    }
    num[i] = '\0';
    int i_ = i - 1;

    for(int j=0;j<i/2;j++)
    {
        if(num[j]==num[i_])
        {p++;}
        i_--;
    }
    if(p==i/2)
    {printf("TRUE");}
    else
    {printf("FALSE");}

    return 0;
}