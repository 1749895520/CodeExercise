#include<stdio.h>
int main()
{
    int num[5],q = 4;

    for(int i=1;i<=32;i++){
        for(int j=0;j<=1;j++){
            num[q] = j;
            printf("%50d",num[q]); 
        }
    }
    return 0;
}