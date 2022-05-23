#include<stdio.h>
int main()
{
    int num,b,s,g;

    for(num=100;num<=999;num++){
        b = num/100;
        s = num/10%10;
        g = num%10;
        if(num == b*b*b+s*s*s+g*g*g){
            printf("%d\n",num);
        }
    }
    return 0;
}