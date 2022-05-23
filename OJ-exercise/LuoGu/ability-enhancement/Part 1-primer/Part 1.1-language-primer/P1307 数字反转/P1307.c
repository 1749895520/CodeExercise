/*Êı×Ö·´×ª*/
#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    int num_change = num%10;
    num /= 10;
    while(num!=0){
        num_change *= 10;
        num_change += num%10;
        num /= 10;
    }
    printf("%d",num_change);
    return 0;
}