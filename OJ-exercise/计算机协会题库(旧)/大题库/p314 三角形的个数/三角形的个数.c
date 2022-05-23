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
    for(a=1;a<=l/3;a++){
        for(b=a;b<=(l-a)/2;b++){
            c = l-a-b;
            if(a!=c&&a+b<c){
                times++;
            }
        }
    }
    printf("%d",times);

    return 0;
}