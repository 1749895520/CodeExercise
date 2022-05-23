#include<stdio.h>
int main(void){
    /*输入数组数据*/
    int n;
    scanf("%d",&n);
    int num[n],num_[n];
    for(int i=0;i<n;i++){
        scanf("%d",num+i);
    }
    /*定义初始连号区间个数为n个*/
    int types = n;
    /*定义区间大小*/
    for(int i=2;i<n;i++){
        //定义区间初始元素位置
        for(int start=0;start<=n-i;start++){
            //按照初始位置start开始的i大小的区间存入判断数组
            int n_=0,j=start,i_=0;
            num_[0] = num[start];
            for(j=start+1;j<start+i;j++){
                n_++;
                num_[n_] = num[j];
                for(i_=0;i_<n_;i_++)
                if(num_[i_+1]<num_[i_]){
                    num_[i_] = num_[i_]+num_[i_+1];
                    num_[i_+1] = num_[i_]-num_[i_+1];
                    num_[i_] = num_[i_]-num_[i_+1];
                }
            }
            if(num_[i_+1]-num_[0]==i-1){
                types += 1;
            }
        }
    }
    printf("%d",types);
    return 0;
}