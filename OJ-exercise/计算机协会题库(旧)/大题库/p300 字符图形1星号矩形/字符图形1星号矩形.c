#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);     //输入n行n列

    for(int i=1;i<=n*n;i++)     //定义i为总数
    {
        printf("*");    //输出星号
        if(i%n==0)      //判断一行是否输出n个后换行
        {
            printf("\n");
        }
    }
    return 0;
}