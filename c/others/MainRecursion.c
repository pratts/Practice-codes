//main recursion

#include <stdio.h>

int main()
{
	static int a=1;
	
	if(a<100)
	{
		printf("%d\n",a++);
		main();
	}
	return 0;
}
