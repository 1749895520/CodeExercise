#include<stdio.h>
int main()
{
    int n;
    
    scanf("%d",&n);


    if(n!=1)                        //1为非质数
    {
        if(n>2)                     //当n大于2时
        {
            for(int i=2;i<n;i++)    //判断n除以大于二的数的余
            {
                if(n%i==0)
                {
                    printf("F");
                    return 0;
                }
                else
                continue;
            }
        printf("T");
        }
        else
        printf("T");
    }
    else
    printf("F");

    return 0;
}