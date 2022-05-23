#include<stdio.h>
int main(void){
    int num,a,b,c,d;
    for(num=1000;num<=9100;num++){
        a = num/1000;
        b = num/100%10;
        c = num/10%10;
        d = num%10;
        if(a+b+c+d==10){
            printf("%d\n",num);
        }
    }
    return 0;
}