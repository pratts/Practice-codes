//Casting the result of malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a=malloc(sizeof(*a));
	*a=2;
	printf("%d\n",&a);
	printf("%d",a);
	return 0;
}
