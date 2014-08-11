//Ternary operator to find largest of three numbers
#include <stdio.h>

int main()
{
	int a=1,b=2,c=3;
	printf("%d",(a>b)?((a>c)?a:c):((b>c)?b:c));
	return 0;
}
