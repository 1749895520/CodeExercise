#include<stdio.h>
int main(void){
    //求集合A的长度及元素
    int n,i;
    scanf("%d",&n);
    int num1[n];
    for(i=0;i<n;i++){
        scanf("%d",&num1[i]);
        getchar();
    }
    //求集合B的长度及元素
    int m,j;
    scanf("%d",&m);
    int num2[m];
    for(j=0;j<m;j++){
        scanf("%d",&num2[j]);
        getchar();
    }
    //数组从小到大排序
    //A集合
    int p,q,temp;
    for(p=0;p<n-1;p++){
        for(q=p+1;q<n;q++){
            if(num1[p]>num1[q]){
                temp = num1[p];
                num1[p] = num1[q];
                num1[q] = temp;
            }
        }
    }
    //B集合
    for(p=0;p<m-1;p++){
        for(q=p+1;q<m;q++){
            if(num2[p]>num2[q]){
                temp = num2[p];
                num2[p] = num2[q];
                num2[q] = temp;
            }
        }
    }
    //判断交集，余集
    int jiao[n],yu[n];    //定义交，余集
    int a,b;
    int ji = 0,y = 0;        //定义交，余集位置
    for(a=0;a<n;a++){
        for(b=0;b<m;b++){
            if(num1[a]==num2[b]){   //判断是否有相交的值
                jiao[ji] = num1[a];
                ji++;
                break;
            }
        }
        if(b==m){
            yu[y] = num1[a];
            y++;
        }
    }
    //输出交集
    int i_;
    for(i_=0;i_<ji;i_++){
        printf("%d ",jiao[i_]);
    }
    printf("\n");
    //不存储并集直接输出
    int sum = n+m-ji;
    int N,A = 0,B = 0;
    for(N=0;N<sum;N++){
        if(A>=n){           //若A集合全部输出，则只输出B集合
            printf("%d ",num2[B]);
            B++;continue;
        }
        if(B>=m){           //若B集合全部输出，则只输出A集合
            printf("%d ",num1[A]);
            A++;continue;
        }
        if(num1[A]<num2[B]){
            printf("%d ",num1[A]);
            A++;continue;
        }
        if(num1[A]==num2[B]){
            printf("%d ",num1[A]);
            A++;B++;continue;
        }
        if(num1[A]>num2[B]){
            printf("%d ",num2[B]);
            B++;continue;
        }
    }
    printf("\n");
    //输出余集
    int j_;
    for(j_=0;j_<y;j_++){
        printf("%d ",yu[j_]);
    }
    return 0;
}