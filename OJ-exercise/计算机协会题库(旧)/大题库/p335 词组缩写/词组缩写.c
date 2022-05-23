#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch1[200],ch2[200]={' '};
    int i =0;

    gets(ch1);

    strcat(ch2,ch1);


    for(i=0;i<strlen(ch2);i++){
        if(ch2[i]==' '&&ch2[i+1]!=' '){
            if((int)ch2[i+1]>=97&&(int)ch2[i+1]<=122){
                ch2[i+1]=(int)ch2[i+1] - 32;
            }
            printf("%c",ch2[i+1]);
        }
    }

    return 0;
}