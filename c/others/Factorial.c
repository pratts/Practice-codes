//Factorial of a number

#include <stdio.h>
int main()
{
	int num=5,a=1;
	while(num>0)
	{
		a=a*num;
		num--;
	}
	printf("%d",a);
	
	return 0;
}
