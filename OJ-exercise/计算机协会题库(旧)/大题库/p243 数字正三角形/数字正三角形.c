#include<stdio.h>
int main()
{
    int N,n,space_1,point;   //定义变量：行数N，计数n，左右空格space1、2，星号和每行输入的次数number

    scanf("%d",&N);     //输入行数N

    for(n = 1 ; n <= N ; n++)       //循环行数N
    {
        for(space_1 = 1 ; space_1 <= N - n ; space_1++) //循环左边空格
        {
            printf(" ");
        }

        for(point = 1 ; point <= 2 * n - 1 ; point++)   //循环数字
        {
            printf("%d",n);
        }

        printf("\n");
    }

    return 0;
}