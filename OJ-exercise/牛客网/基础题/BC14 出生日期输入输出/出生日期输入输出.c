#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    int year = num/10000;
    int month = num/100%100;
    int date = num%100;
    printf("year=%d\n",year);
    printf("month=%02d\n",month);
    printf("date=%02d\n",date);
    return 0;
}