#include<stdio.h>
#include<string.h>
int main(void){
    char str1[10],str2[10];

    //从键盘读取两个字符串
    gets(str1);
    scanf("\n");
    gets(str2);

    //计算每个字符串的长度
    int a = strlen(str1);
    int b = strlen(str2);

    //两个字符串长度不相等
    if(a!=b){
        printf("1");return 0;
    }
    //两个字符串长度相等
    else if(a==b){
        for(int i=0;i<a;i++){
            if(str1[i]!=str2[i]){
                break;
            }
            if(i==a-1){
                printf("2"); return 0;  //两个字符串完全相等
            }
        }
        strupr(str1);strupr(str2);      //将字符串全部改为大写
        
        for(int i=0;i<a;i++){
            if(str1[i]!=str2[i]){
                printf("4");return 0;   //两个字符串除长度外都不相等
            }
            if(i==a-1){
                printf("3"); return 0;  //两个字符串除大小写外完全相等
            }
        }
    }
    return 0;
}