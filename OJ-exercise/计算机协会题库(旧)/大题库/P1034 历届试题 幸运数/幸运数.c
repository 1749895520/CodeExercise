#include<stdio.h>
int main(void){
    /*输入数据范围*/
    int m,n;
    scanf("%d %d",&m,&n);
    int num[n];
    int m_ = m;
    /*数据存入数组*/
    for(int i=0;i<=n-m;i++){
        num[i] = m_++; 
    }
    /*定义a为数组剩余长度*/
    int a;
    for(int i=1;i<=n-m;i++){    //从数组下标2开始
        int j=num[i];
        while(j<n){
            num[j] = 0; //将数组下标中为num[i]的倍数的数改为0
            j += num[i];
        }
        a=i;
        /*将数组重新压缩，去除中间的0*/
        for(int i_=i;i_<n;i_++){
            if(num[i_]!=0){
                num[a++]=num[i_];
            }
        }
        num[a]=0;   //将最后一位改为0方便计数
        n = a-1;    //记录压缩后数组的长度
    }
    printf("%d",a); //输出数组长度
    return 0;
}