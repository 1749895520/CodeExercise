#include<stdio.h>
int main(){
    char a[10]={0},b[10]={0};
    scanf("%s %s",a,b);
    int i=0;
    long mult_a=1;
    while(a[i]!='\0'){
        mult_a *= a[i]-64;
        i++;
    }
    int j=0;
    long mult_b=1;
    while(a[j]!='\0'){
        mult_b *= a[j]-64;
        j++;
    }
    if(mult_b%47==mult_a%47){
        printf("I got it!\n");
    }
    else{
        printf("It is a dream.\n");
    }
	return 0;
}