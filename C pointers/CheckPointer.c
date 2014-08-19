//Check pointer
#include <stdio.h>

int main()
{
	int a[]={1,2};
	int *p=a;
	*p++;
	
	printf("%d %d %d",a[0],a[1],*p);
	
	return 0;
}
