#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    char* cha[5];
    for(int i=0;i<5;i++){
        cha[i] = (char *)malloc(100*sizeof(char));
        scanf("%s",cha[i]);
    }
    int max = strlen(cha[0]);
    int max_i = 0;
    for(int i=1;i<5;i++){
        int a = strlen(cha[i]);
        if(max<a){
            max = a;
            max_i = i;
        }
    }
    printf("%s",cha[max_i]);
    return 0;
}