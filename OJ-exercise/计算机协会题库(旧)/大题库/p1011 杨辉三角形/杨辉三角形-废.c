#include<stdio.h>
int main()
{
    int N,times = 1;
    long n,m,n_,m_,num;

    scanf("%d",&N); //输入行数

    for(int i=1;i<=N;i++){      //判断行数
        n = i-1;                //确定分子初始值
        m = 1;                  //确定分母m的初始值
        times = 1;              //复原阶乘次数times
        n_ = n-1;               //确定每行分子阶乘的最大值
        m_ = 2;                 //确定每行分母阶乘的最小值
        for(int j=1;j<=i;j++){       //判断输出列数
            if(j==1){                //判断输出第一列均为1
                printf("1 ");
            }
            if(j>1){
                while(times<j-1){       //确定某行j列分母大小
                    m = m*(m_++);
                    n = n*(n_--);    //确定每行分子大小
                    times++;
                }
                num = n/m;          //确定某行某列的值并输出
                printf("%ld ",num);
            }
        }
        printf("\n");
    }
    return 0;
}