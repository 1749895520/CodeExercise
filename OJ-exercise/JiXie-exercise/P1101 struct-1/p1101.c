/*结构体计算商品的总价格*/
#include<stdio.h>
#include<stdlib.h>
struct prut{
    char MC[101];
    double DJ;
    int SL;
};
int main(void){
    /*输入商品数量*/
    int N;
    scanf("%d",&N);
    /*输入每个商品的数据*/
    struct prut num[N];
    double money = 0;
    for(int i=0;i<N;i++){
        scanf("%s %lf %d",num[i].MC,&num[i].DJ,&num[i].SL);
        /*计算总金额*/
        money += num[i].DJ * num[i].SL;
    }
    /*输出总价*/
    printf("%lf",money);
    return 0;
}