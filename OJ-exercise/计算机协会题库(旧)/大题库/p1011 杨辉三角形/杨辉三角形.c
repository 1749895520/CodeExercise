#include<stdio.h>
int main()
{
    int N,num[34],num_[34];

    scanf("%d",&N); //输入行数

    for(int i=0;i<N;i++){      //判断第i行
        for(int j=0;j<=i;j++){      //判断第j列
            if(j==0 || j==i){       //确定i行第一列与最后一列为1
                num[0]=1;num[i]=1;
                printf("1 ");
            }
            if(j>0&&j<i){       //计算第i行j列与i-1列中j-1和j列的和
                    num_[j] = num[j-1]+num[j];
                    printf("%d ",num_[j]);  //输出i行j列的数
            }
        }
        for(int q=1;q<i;q++){   //将新一列的数组存入上一列数组
            num[q] = num_[q];
            }
        printf("\n");           //换行
    }
    return 0;
}