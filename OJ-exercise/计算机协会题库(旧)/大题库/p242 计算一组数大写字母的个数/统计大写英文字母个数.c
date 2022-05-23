#include<stdio.h>
#include<string.h>
int main()
{
    char cha[10000];
    int num_1,num_2;
    gets(cha);

    num_1 = strlen(cha);

    for(int i=0;i<num_1;i++)
    {
        if(cha[i]>='A' && cha[i]<='Z')
        {
            num_2++;
        }
    }

    printf("%d",num_2);

    return 0;
}
