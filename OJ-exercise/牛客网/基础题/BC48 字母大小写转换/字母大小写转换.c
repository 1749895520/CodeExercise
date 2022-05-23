#include<stdio.h>
int main(void){
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch>='a'&&ch<='z'){
            printf("%c\n",ch-32);
        }
        else if(ch>='A'&&ch<='Z'){
            printf("%c\n",ch+32);
        }
        getchar();
    }
    return 0;
}