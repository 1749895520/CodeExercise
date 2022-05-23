/*½ò½òµÄ´¢Ðî¼Æ»®*/
#include<stdio.h>
int main(void){
    int money=0;
    int YuSuan[12];
    int ChuXu = 0;
    for(int i=0;i<12;i++){
        scanf("%d",&YuSuan[i]);
    }
    for(int i=0;i<12;i++){
        money += 300;
        money -= YuSuan[i];
        if(money>=100){
            ChuXu += money/100*100;
            money %= 100;
        }
        else if(money<0){
            printf("-%d",i+1);
            return 0;
        }
    }
    money += ChuXu*1.2;
    printf("%d",money);
    return 0;
}