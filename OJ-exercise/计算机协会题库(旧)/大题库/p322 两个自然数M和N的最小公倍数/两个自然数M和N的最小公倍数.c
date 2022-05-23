#include<stdio.h>
int main()
{
    int m,n;

    scanf("%d %d",&m,&n);

    if(m<n)
    {
        m = m+n;
        n = m-n;
        m = m-n;
    }
    for(int i=m;;i+=m)
    {
        if(i%n==0)
        {printf("%d",i);break;}
    }
    
    return 0;
}