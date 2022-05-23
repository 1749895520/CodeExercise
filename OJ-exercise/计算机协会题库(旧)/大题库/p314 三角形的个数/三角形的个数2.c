#include<stdio.h>
int main()
{
    //定义l为输入的三角形周长
    int l;
    scanf("%d",&l);
    //定义三角形三边长
    int a,b,c;
    //定义不等边三角形个数
    int times = 0;
    //判断周长是否大于8(<8时为0)
    if(l>8){
        for(a=2;a<=l/3;a++){
            for(b=a+1;b<=(l-a)/2;b++){
                c = l-a-b;
                if(c<=4||a+b<=c||c<=b){
                    continue;
                }
                else if(a!=b&&b!=c&&a!=c){
                    times++;
                }
            }
        }
    }
    //输出0后结束
    else{
        printf("0");
        return 0;
    }
    //输出times的值
    printf("%d",times);

    return 0;
}