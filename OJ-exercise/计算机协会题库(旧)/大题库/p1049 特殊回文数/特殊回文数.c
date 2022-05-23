#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    //若为五位数
    int a,b,middle;
    for(a=1;a<=9;a++){
        for(b=0;b<=9;b++){
            middle = n-2*(a+b);
            if(a>0&&b>=0&&middle>=0&&middle<=9&&((a+b)*2+middle==n)){
                printf("%d%d%d%d%d\n",a,b,middle,b,a);
            }
        }
    }

    //若为六位数
    unsigned int x,y,z;
    for(x=1;x<=9;x++){
        for(y=0;y<=9;y++){
            z = n/2-x-y;
            if(z<=9&&x>0&&y>=0&&z>=0&&(x+y+z==n/2)){
                printf("%d%d%d%d%d%d\n",x,y,z,z,y,x);
            }
        }
    }
    return 0;
}