#include<stdio.h>
int main()
{
    int n,m,num[1000];
    int i,j;

    //输入n个整数，求整数m所在的位置
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&m);

    //判断数组中第j+1个数为m，输出位数或不存在输出-1.
    for(j=0;j<n;j++){
        if(num[j]==m){
            printf("%d",j+1);
            return 0;
        }
    }
    printf("-1");
    
    return 0;
}