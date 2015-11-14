//Count bits set in an integer
#include <stdio.h>

int main()
{
	int a=221,count=0;
	while(a>0)
	{
		if(a%2==1)
		{
			count+=1;
		}
		a=a>>1;
	}
	printf("%d",count);
	return 0;
}
