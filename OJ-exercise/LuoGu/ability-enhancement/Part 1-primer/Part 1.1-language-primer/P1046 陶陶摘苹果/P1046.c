/*ÌÔÌÔÕªÆ»¹û*/
#include<stdio.h>
int main(void){
    int heights[10];
    for(int i=0; i<10; i++){
        scanf("%d", &heights[i]);
    }
    int tall;
    scanf("%d", &tall);
    int num=0;
    for(int i=0; i<10; i++){
        if(heights[i]<=tall+30){
            num++;
        }
    }
    printf("%d", num);
    return 0;
}