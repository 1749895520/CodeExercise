#include<stdio.h>
int main()
{
    int n,arr[10],arr2[10]; //定义数字个数n，输入数组arr[],输出数组arr2[]
    int num = 0;            //定义最大值存储变量num
    int num2;               //定义最大数位于输入数组arr[]的位置

    scanf("%d",&n);         //输入数组长度
    
    for(int i=0;i<n;i++)    //输入数组中每一位数的循环
    {
        scanf("%d",&arr[i]);//输入数组各个位置
    }

    for(int m=n-1;m>=0;m--)    //将输入数组arr[]中最大值依次存入输出数组arr2[]循环
    {
        for(int j=0;j<n;j++)//输入数组arr[]各位的大小比较循环
        {
            if(num<arr[j])  //判断最大值num的循环
            {
                num = arr[j];   //定义最大值num
                num2 = j;   //定义最大值位于输入数组arr[]的位置
            }
        }
    arr2[m] = num;          //输出数组arr2[]按大小排序
    arr[num2] = 0;          //每次将输入数组arr[]最大值删去
    num = 0;                //将每次最大值num归零

    printf("%-2d",arr2[m]); //依次输出输出数组arr2[]的值
    }

    return 0;
}