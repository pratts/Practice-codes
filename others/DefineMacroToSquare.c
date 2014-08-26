//Define a macro that squares a number

#include <stdio.h>
#define sq(x) x*x

int main()
{
	int i=0;
	for(;i<11;i++)
	{
		printf("%d=%d\n",i,sq(i));
	}
	
	return 0;
}
