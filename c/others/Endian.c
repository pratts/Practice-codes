//Big or little endian
#include <stdio.h>

int main()
{
	int i=1;
	char a=*(&i);
	//printf("%d",a);
	if(a)
	{
		printf("Little endian");
	}
	else
	{
		printf("Big endian");
	}
	return 0;
}
