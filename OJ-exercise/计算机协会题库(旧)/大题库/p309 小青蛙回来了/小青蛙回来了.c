#include<stdio.h>
int main()
{
    int m,n,h;
    int h_2 = 0;

    scanf("%d %d %d",&m,&n,&h);

    for(int i=1;;i++)
    {
        h_2 += m;
        if(h_2>=h)
        {printf("%d",i);break;}
        h_2 -= n;

    }
    return 0;
}