/*Cantor±í*/
#include<stdio.h>
int main(void){
    int n;
    int N = 2;
    int a=0,b=0;
    int a_max=1,b_max=2;
    int charge_a=1,charge_b=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(a<a_max&&charge_a==1){
            a++;
        }
        else if(a>1){
            a--;
            charge_a = 0;
        }
        else{
            charge_a = 1;
            a_max += 2;
        }
        if(b<b_max&&charge_b==1){
            b++;
        }
        else if(b>1){
            b--;
            charge_b = 0;
        }
        else{
            charge_b = 1;
            b_max += 2;
        }
    }
    printf("%d/%d",a,b);
    return 0;
}