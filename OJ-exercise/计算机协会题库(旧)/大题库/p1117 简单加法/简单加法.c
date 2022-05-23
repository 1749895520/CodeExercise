#include<stdio.h>
int main(void){
    int num;
    int times = 0;
    scanf("%d",&num);
    for(int n=0;n<num;n++){
        int a = n/1000;
        int b = n/100%10;
        int c = n/10%10;
        int d = n%10;
        if(a<=3&&b<=3&&c<=3){
            if(3*(d+1)<10){
                times++;
            }
        }
    }
    printf("%d",times);

    return 0;
}