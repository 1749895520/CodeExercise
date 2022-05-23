/*苹果和虫子*/
#include<stdio.h>
int main(void){
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(m==0){
        printf("0");
    }
    else if(t==0){
        printf("%d",m);
    }
    else if(s==0){
        printf("0");
    }
    else if(t*m<s){
        printf("0");
    }
    else if(s%t==0){
        printf("%d",m-s/t);
    }
    else{
        printf("%d",m-s/t-1);
    }
    return 0;
}