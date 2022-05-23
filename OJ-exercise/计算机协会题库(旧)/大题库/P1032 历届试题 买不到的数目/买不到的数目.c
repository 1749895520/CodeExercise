#include<stdio.h>
static int m,n;
int charge(int num,int a){
    if(a==num){
        return 1;
    }
    charge(num,a+n);
    charge(num,a+m);
    return 0;
}
int main(void){
    /*定义两种糖袋子*/
    scanf("%d %d",&m,&n);
    /*求出最小公倍数*/
    int min;
    if(m<n){
        m = m+n;
        n = m-n;
        m = m-n;
    }
    for(int i=m;;i+=m){
        if(i%n==0)
        {min = i;break;}
    }
    for(int i=min-1;i>m;i--){
        int a=0;
        int num = charge(i,a);
        if(num==0){
            printf("%d",num);
            return 0;
        }
    }
    return 0;
}