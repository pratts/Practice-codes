//Decimal to binary
#include <stdio.h>

void dectobin(int num)
{
	if(num!=0)
	{
		dectobin(num/2);
		printf("%d",num%2);
	}
}

int main()
{
	dectobin(16);
	return 0;
}
