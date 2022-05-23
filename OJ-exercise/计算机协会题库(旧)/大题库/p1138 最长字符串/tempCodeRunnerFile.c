#include<stdio.h>
int main(void){
    char cha[5][100];
    for(int i=0;i<5;i++){
        scanf("%s",&cha[i]);
    }
    int max;
    for(int j=0;j<4;j++){
        if(sizeof(cha[j])>sizeof(cha[j+1])){
            max = sizeof(cha[j]);
        }
    }
    return 0;
}