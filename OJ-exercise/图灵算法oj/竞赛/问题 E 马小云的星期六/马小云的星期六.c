#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0&&b==0){
            break;
        }
        int c=a+b;
        while(c>7){
            c %= 7;
        }
        printf("%d\n",c);
    }
	return 0;
}