/*��Ǧ��*/
#include<stdio.h>
int main(void){
    int number;
    int type_1,num_1,type_2,num_2,type_3,num_3;
    /*�����߸�����*/
    scanf("%d",&number);
    scanf("%d %d",&num_1,&type_1);
    scanf("%d %d",&num_2,&type_2);
    scanf("%d %d",&num_3,&type_3);
    /*�ж�ÿ�ֻ��Ѷ���Ǯ*/
    long money_1 = number%num_1==0?(number/num_1)*type_1:(number/num_1+1)*type_1;
    long money_2 = number%num_2==0?(number/num_2)*type_2:(number/num_2+1)*type_2;
    long money_3 = number%num_3==0?(number/num_3)*type_3:(number/num_3+1)*type_3;
    long money = money_1;
    /*�ж����ٻ���*/
    if(money>money_2) money = money_2;
    if(money>money_3) money = money_3;
    /*�������*/
    printf("%ld",money);
    return 0;
}