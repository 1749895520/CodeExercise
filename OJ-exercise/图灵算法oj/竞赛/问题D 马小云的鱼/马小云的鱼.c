#include<stdio.h>
int main(){
    int num[101]={0};
    int i=0;
    while(scanf("%d",&num[i])!=EOF){
            if(num[i]==0){
                break;
            }
            i++;
            
    }
    for(int j=i-1;j>=0;j--){
        printf("%d ",num[j]);
    }
	return 0;
}