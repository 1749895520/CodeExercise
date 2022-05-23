#include<stdio.h>
#include<math.h>
int main()
{
    long n,m,Fn1,Fn2,Fn3;

    scanf("%ld",&m);

    Fn1 = 1;
    Fn2 = 1;
    Fn3 = 1;

    if(m>2)     //前两个数控制为1
    {
        for(n=3;n<=m;n++)       //控制斐波那契数列各位的值
        {
            Fn3 = (Fn1 + Fn2) % 10007;  //计算除以10007后的余

            Fn1 = Fn2;
            Fn2 = Fn3;
        }
    }

    printf("%ld",Fn3);

    return 0;
}