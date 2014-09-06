#include <stdio.h>

void print(int a)
{
	if(a<10)
	{
		register int sp asm ("sp");
		printf("%2d:%x\n",a, sp);
		a++;
		print(a);
	}
}

int main()
{
	char *a="abc";
	char *b="abc";
	
	printf("%d",a==b);
	printf("\n%d",&a);
	printf("\n%d",&b);
	
	int i=5;
	printf("\n%d",i<<2);
	printf("\n%d\n",i>>2);
	print(1);
	return 0;
}
