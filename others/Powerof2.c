//Power of 2
#include <stdio.h>

int main()
{
	int i;
	for(i=1;i<20;i++)
	{
		if(!(i&(i-1)))
		{
			printf("%d-yes\n",i);
		}
	}
	return 0;
}
