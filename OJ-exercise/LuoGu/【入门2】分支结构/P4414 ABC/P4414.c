/*ABC*/
#include<stdio.h>
#include<stdlib.h>
int PaiXu(const void* a,const void* b){
	return (*(int*)a-*(int*)b);
}
int main(void){
    int num[3];
    char order[4];
    for(int i=0; i<3; i++){
        scanf("%d",&num[i]);
    }
	getchar();
    scanf("%s",order);
	qsort(num,3,sizeof(int),PaiXu);
	int order_[3];
	for(int i=0; i<3; i++){
		if(order[i]=='A'){
			order_[i] = 0;
		}
		else if(order[i]=='B'){
			order_[i] = 1;
		}
		else{
			order_[i] = 2;
		}
	}
	for(int i=0; i<3; i++){
		int n = order_[i];
		printf("%d ",num[n]);
	}
    return 0;
}