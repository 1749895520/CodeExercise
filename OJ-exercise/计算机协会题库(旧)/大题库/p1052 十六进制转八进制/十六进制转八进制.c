#include<stdio.h>
int main()
{
    int times;
    scanf("%d",&times);
    long num[times];
    for(int i=0;i<times;i++){
        scanf("%lX\n",&num[i]);
    }
    for(int j=0;j<times;j++){
        printf("%lo",num[j]);
    }
    return 0;
}