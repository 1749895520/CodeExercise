#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    int num1[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&num1[i]);
        getchar();
    }

    int j,k,temp;
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(num1[j]>num1[k]){
                temp = num1[j];
                num1[j] = num1[k];
                num1[k] = temp;
            }
        }
    }
    int l;
    for(l=0;l<n;l++){
        printf("%d ",num1[l]);
    }
    return 0;
}