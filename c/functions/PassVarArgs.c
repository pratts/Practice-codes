//Pass variable argument list to another function
#include <stdio.h>
#include <stdarg.h>

void check(int num,va_list list);

void pass(int num,...)
{
	va_list list;
	va_start(list,num);
	
	check(num,list);
	va_end(list);
}

void check(int num,va_list list)
{
	int i=0;
	for(;i<num;i++)
	{
		printf("%d ",va_arg(list,int));
	}
}

int main()
{
	pass(4, 1,2,3,4);
	return 0;
}
