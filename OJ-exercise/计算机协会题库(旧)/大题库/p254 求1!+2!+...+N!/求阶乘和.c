#include<stdio.h>
int main()
{
    int sum = 0;
    int temp = 1;
    int n;

    scanf("%d",&n);

	for (int i=1;i<=n;i++)
    {
		temp = temp * i;
		sum = sum + temp;
	}
    
	printf("%d", sum);
}