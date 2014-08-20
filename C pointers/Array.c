//Difference between arr and &arr where arr is an array of integers
#include <stdio.h>

int main()
{
	int a[]={1,2};
	if(a==&a)
	{
		printf("%lu",(a));
	}
	return 0;
}
