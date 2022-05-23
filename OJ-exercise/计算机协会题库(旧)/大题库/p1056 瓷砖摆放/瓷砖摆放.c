#include <stdio.h>
int num=0;
int n;
void f(int a)
{
	if(a==n)
	{
		num++;
		return;
	}
	if(a>n)
	{
		return;
	}
	f(a+1);
	f(a+2);
}

int main (void)
{
	scanf("%d",&n);
	f(0);
	printf("%d",num);
	return 0; 
} 