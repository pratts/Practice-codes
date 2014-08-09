//swap variables with using third variable
#include <stdio.h>

int main()
{
	int a=3,b=4;
	printf("%d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
	
	return 0;
}
