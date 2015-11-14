//finding offset of a field of a structure

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct a
{
	char b;
	int c;
};

int main()
{
	struct a a1;
	printf("%lu\n",offsetof(struct a,c));
	printf("%lu\n",&(((struct a*)0)->c));
	printf("%lu",(unsigned long)&(a1.c) - (unsigned long)&(a1));
	return 0;
}
