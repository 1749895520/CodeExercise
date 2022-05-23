#include<stdio.h>
#include<string.h>
int main(void){
    char arr[100];
    gets(arr);

    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            printf("%d",i+1);return 0;
        }
    }
    printf("0");
    return 0;
}