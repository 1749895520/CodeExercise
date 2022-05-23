#include<stdio.h>
int main(void){
    printf("The size of short is %d bytes.\nThe size of int is %d bytes.\nThe size of long is %d bytes.\nThe size of long long is %d bytes.\n",sizeof(short),sizeof(int),sizeof(long),sizeof(long long));
    return 0;
}