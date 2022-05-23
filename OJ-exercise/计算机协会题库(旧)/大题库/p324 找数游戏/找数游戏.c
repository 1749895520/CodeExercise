#include<stdio.h>
int main()
{
    int g,s,b;
    int num[7]={2,3,5,7,11,13,17};
    int i = 0;

    for(g=0;g<8;g++)
    {
    for(s=2;s<=9;s++)
    {
    for(b=1;b<=8;b++)
    {
        if((s+b)==num[i])
        {printf("%d",g+s*10+b*100);i++;}
        else{i++;}
    }
    }
    }
    
    return 0;
}