#include<stdio.h>
int main(){
    char a[10]={0},b[10]={0};
    scanf("%s %s",a,b);
    int i=0;
    long long mult_a=1;
    while(a[i]!='\0'){
        int n1 = a[i]-64;
        mult_a *= n1;
        i++;
    }
    int j=0;
    long long mult_b=1;
    while(a[j]!='\0'){
        int n2 = a[j]-64;
        mult_b *= n2;
        j++;
    }
    int x=mult_a%47;
    int y=mult_b%47;
    if(x==y){
        printf("I got it!\n");
    }
    else{
        printf("It is a dream.\n");
    }
	return 0;
}