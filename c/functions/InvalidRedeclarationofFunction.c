//Invalid redeclaration of a function
#include <stdio.h>
#include <math.h>

//print();

int main()
{
	printf("%d",(int)pow((long)1,2));
	return 0;
}

void print()
{
	printf("hello");
}
