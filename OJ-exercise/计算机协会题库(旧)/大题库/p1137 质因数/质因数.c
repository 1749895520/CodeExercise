/*质因数*/
#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    /*输出等号左边的数*/
    printf("%d=",num);
    /*输出等号右边的质因数*/
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("%d",i);
            num /= i;
            i = 1;
            if(num!=1){
                printf("*");    //控制输出乘号的个数
            }
        }
    }
    printf("%d",num);   //最后输出无法被整除的数
    return 0;
}