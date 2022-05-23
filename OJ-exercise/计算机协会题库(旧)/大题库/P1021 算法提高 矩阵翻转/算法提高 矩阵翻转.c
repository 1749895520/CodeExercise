#include<stdio.h>
int main(void){
    /*定义大小为n*n的矩阵*/
    int n;
    scanf("%d",&n);
    int squ[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&squ[i][j]);
        }
    }
    return 0;
}