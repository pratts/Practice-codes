//Function pointer

#include <stdio.h>

int returnsum(int x,int y)
{
	return (x+y);
}

int main()
{
	int (*func)(int,int);
	
	func=&returnsum;
	
	int x=func(2,3);
	printf("%d",x);
	
	return 0;
}
