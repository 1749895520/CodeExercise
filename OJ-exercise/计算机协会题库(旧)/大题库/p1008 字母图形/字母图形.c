#include<stdio.h>
int main()
{
    int n,m,num = 0;
    int i1,i2,j;
    char ch[26] = {'B','C','D','E','F',
    'G','H','I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X','Y','Z','['};

    scanf("%d %d",&n,&m);
    n = n-1;

    for(j=0;j<=n;j++){
            for(i2=0;i2<j;i2++){
                if(num<m){
                ch[i2] = ch[i2] + 1;
                printf("%c",ch[i2]);
                num++;
                }
            }
            for(i1=0+j;i1<m;i1++){
                if(num<m){
                ch[i1] = ch[i1] - 1;
                printf("%c",ch[i1]);
                num++;
                }
            }        
        printf("\n");
        num = 0;
    }
    return 0;
}