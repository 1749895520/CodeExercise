#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d;

    scanf("%d",&n);

    for(int i=3;;i++)
    {
        if(n/pow(2,i)<2)
        {
            c = pow(2,i);
            d = pow(2,i+1);
            a = n - c;
            b = d - n;

            if(a<=b)
            {
                printf("%d",c);
                break;
            }
            else
            {
                printf("%d",d);
                break;
            }
        }
    }
    return 0;
}