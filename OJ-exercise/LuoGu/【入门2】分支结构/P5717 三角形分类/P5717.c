/*�����η���*/
#include<stdio.h>
#include<stdlib.h>
int PaiXu(const void* a,const void* b){
    return (*(int*)a)-(*(int*)b);
}
int main(void){
    int sides[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&sides[i]);
    }
    /*��������*/
    qsort(sides,3,sizeof(int),PaiXu);
    /*�ж�*/
    if(sides[0]+sides[1]<=sides[2]){
        printf("Not triangle\n");
    }
    else{
        if(sides[0]*sides[0]+sides[1]*sides[1]==sides[2]*sides[2]){
            printf("Right triangle\n");
        }
        else if(sides[0]*sides[0]+sides[1]*sides[1]>sides[2]*sides[2]){
            printf("Acute triangle\n");
        }
        else{
            printf("Obtuse triangle\n");
        }
        if(sides[0]==sides[1]){
            printf("Isosceles triangle\n");
            if(sides[1]==sides[2]){
                printf("Equilateral triangle\n");
            }
        }
    }
    return 0;
}