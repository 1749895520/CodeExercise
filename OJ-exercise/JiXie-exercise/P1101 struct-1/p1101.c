/*�ṹ�������Ʒ���ܼ۸�*/
#include<stdio.h>
#include<stdlib.h>
struct prut{
    char MC[101];
    double DJ;
    int SL;
};
int main(void){
    /*������Ʒ����*/
    int N;
    scanf("%d",&N);
    /*����ÿ����Ʒ������*/
    struct prut num[N];
    double money = 0;
    for(int i=0;i<N;i++){
        scanf("%s %lf %d",num[i].MC,&num[i].DJ,&num[i].SL);
        /*�����ܽ��*/
        money += num[i].DJ * num[i].SL;
    }
    /*����ܼ�*/
    printf("%lf",money);
    return 0;
}