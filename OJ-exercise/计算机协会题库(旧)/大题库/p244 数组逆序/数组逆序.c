#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);

    int num[10000];
    
    for(int i=0;i<m;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int j=m-1;j>=0;j--)
    {
        printf("%d ",num[j]);
    }

    return 0;
}