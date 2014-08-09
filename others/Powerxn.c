//Calculate pow(x,n)
#include <stdio.h>

int power(int x,int n)
{
	if(n==2)
	{
		return x*x;
	}
	else
	{
		return (x*power(x,n-1));
	}
}

int main()
{
	printf("%d\n",power(10,5));
	return 0;
}
