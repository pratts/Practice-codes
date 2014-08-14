//check if stack grows up or down
#include <stdio.h>

void check(int* a)
{
	int b;
	if(&b>a)
	{
		printf("UP");
	}
	else
	{
		printf("DOWN");
	}
}

void find()
{
	int c;
	printf("c=%d",(int)&c);
}

int main()
{
	int a=5;
	check(&a);
	
	printf("a=%d\n",(int)&a);
	find();
	return 0;
}
