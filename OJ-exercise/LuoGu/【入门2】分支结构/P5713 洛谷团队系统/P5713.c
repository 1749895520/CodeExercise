/*洛谷团队系统*/
#include<stdio.h>
int main(void){
    int texts;
    scanf("%d",&texts);
    if(3*texts+11>5*texts){
        printf("Local");
    }
    else{
        printf("Luogu");
    }
    return 0;
}