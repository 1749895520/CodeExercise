#include<stdio.h>
int main()
{
    int num[4],num_1,num_2,i;

    for(num_1=1;num_1<100;num_1++)
    {
        num_2 = num_1*num_1;
        for(i=0;i<4;i++)
        {
            num[i] = num_2%10;
            num_2 /= 10;
        }
        if(num[0]==num[1] && num[2]==num[3])
        {
            printf("%d\n",num_1*num_1);
        }
    }
    return 0;
}