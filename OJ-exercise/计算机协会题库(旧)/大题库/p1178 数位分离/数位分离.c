#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    
    int i,j;
    int wei[4];
    for(i=0;;i++){
        wei[i] = num%10;
        num /=10;
        if(num==0){
            break;
        }
    }
    for(j=i;j>=0;j--){
        printf("%d ",wei[j]);
    }
    return 0;
}