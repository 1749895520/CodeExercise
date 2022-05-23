#include<stdio.h>
int main(void){
    //输入范围[a,b]
    int a,b;
    scanf("%d %d",&a,&b);
    
    //定义素数数组num，以及依次存入的位置n
    int num[b];
    int n=0;
    int i,j;

    //求出[2,b]内的素数并存入数组num
    for(i=2;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            num[n] = i;
            n++;
        }
    }
    int p,num_,q;
    //定义p为从a到b的值
    for(p=a;p<=b;p++){
        num_ = p;           //定义num_为被分解数
        printf("%d=",p);    //输出每行等号及左边的数
        for(q=0;q<n;q++){  //定义q为从a到b的素数
            if(num_%num[q]==0){     //若可被整除，则输出质因数和*
                printf("%d*",num[q]);
                num_ = num_/num[q];    //更新p的值
                q = -1;    //每次计算将素数数组重新从下标0开始

                if(num_==1){    //若p已经无因数，则结束该数的计算
                    q = n+1;
                    printf("\b \n"); //将最后一个*去除并换行
                }

            }
        }
    }
    return 0;
}