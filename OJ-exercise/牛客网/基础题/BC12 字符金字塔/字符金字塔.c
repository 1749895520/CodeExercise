#include<stdio.h>
int main(void){
    char n;
    scanf("%c",&n);
    for(int i=1;i<=5;i++){
        for(int space=0;space<5-i;space++){
            printf(" ");
        }
        for(int cha=1;cha<=i;cha++){
            printf("%c ",n);
        }
        printf("\n");
    }
    return 0;
}