/*Èý½Çº¯Êý*/
#include<stdio.h>
#include<stdlib.h>
int PaiXu(const void* a,const void* b){
    return (*(int*)a)-(*(int*)b);
}
int Max_Yin(int Chu,int BeiChu){
    int Yu = BeiChu % Chu;
    while(Yu!=0){
        BeiChu = Chu;
        Chu = Yu;
        Yu = BeiChu % Chu;
    }
    return Chu;
}
int main(void){
    int side[3];
    scanf("%d %d %d",side,side+1,side+2);
    qsort(side,3,sizeof(int),PaiXu);
    int n = Max_Yin(side[0],side[2]);
    side[0] /= n;
    side[2] /= n;
    printf("%d/%d",side[0],side[2]);
    return 0;
}