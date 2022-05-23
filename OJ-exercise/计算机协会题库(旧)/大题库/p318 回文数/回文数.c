#include<stdio.h>
int main()
{
    int n1,n_,n2;
    int n = 0;

    scanf("%d",&n1);

    while(1)
    {
        n_ = n1;
        n2 = 0;
        while(n_!=0)
        {
            n2 = n2*10 + n_%10;
            n_ = n_/10;
        }
        if(n1 == n2)
        {break;}
        else
        {n1 = n1 + n2;n++;}
    }
    printf("%d",n);

    return 0;
}