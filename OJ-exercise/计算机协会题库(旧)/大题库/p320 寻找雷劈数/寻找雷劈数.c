#include<stdio.h>
int main()
{
    int num,num_1,num_2;

    for(num=1000;num<=9999;num++)
    {
        num_1 = num/100;
        num_2 = num%100;
        if((num_1+num_2)*(num_1+num_2)==num)
        {printf("%d\n",num);}
    }
    return 0;
}