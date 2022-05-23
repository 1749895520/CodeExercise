/*阿尔法乘积*/
#include<stdio.h>
int main(void){
    int num,num_;
    scanf("%d",&num);

    while(num/10!=0){
        num_ = num;
        num = 1;
        while(num_/1!=0){
            if(num_%10!=0){
                num *= num_%10;
            }
            num_ /= 10;
        }
    }
    printf("%d",num);
    return 0;
}