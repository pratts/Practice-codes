//Size of a structure without sizeof()
#include <stdio.h>

struct node
{
	int a,b;
	char x;
};

int main()
{
	struct node *t=(struct node*)0;
	t++;
	printf("%ld",(int*)t);
	return 0;
}
