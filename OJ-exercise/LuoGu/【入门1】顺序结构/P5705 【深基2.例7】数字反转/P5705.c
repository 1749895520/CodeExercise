/*Êý×Ö·´×ª*/
#include<stdio.h>
int main(void){
    char num[6]={'\0'};
    scanf("%s",num);
    for(int i=4;i>=0;i--){
        printf("%c",num[i]);
    }
    return 0;
}