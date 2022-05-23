/*月份天数*/
#include<stdio.h>
int main(void){
    int year,month;
    scanf("%d %d",&year,&month);
    if(((year%4==0&&year%100!=0)||(year%400==0))&&(month==2)){
        printf("29");
    }
    else{
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: printf("31"); break;
            case 2: printf("28"); break;
            case 4:
            case 6:
            case 9:
            case 11: printf("30"); break;

        }
    }
    return 0;
}