/*小玉家的电费*/
#include<stdio.h>
int main(void){
    int electric,part;
    double charge=0;
    scanf("%d",&electric);
    if(electric>400){
        part = electric-400;
        charge += 0.5663*part;
        electric -= part;
    }
    if(electric>150){
        part = electric-150;
        charge += 0.4663*part;
        electric -= part;
    }
    charge += electric*0.4463;
    printf("%.1f",charge);
    return 0;
}