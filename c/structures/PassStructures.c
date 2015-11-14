//Pass structure variables

#include <stdio.h>

struct a
{
	int b,c;
};

void print(struct a a2)
{
	printf("%d %d\n",a2.b,a2.c);
}

int main()
{
	struct a a1={1,2};
	print(a1);
	
	struct a a2={1,2};
	print(a2);
	
	print((struct a){1,2});
	return 0;
}
