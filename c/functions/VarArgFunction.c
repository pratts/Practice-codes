//Function that takes variable arguments

#include <stdio.h>
#include <stdarg.h>

void sum(int num,...)
{
	int s=0,i;
	va_list list;
	va_start(list,num);
	
	for(i=0;i<num;i++)
	{
		s+=va_arg(list,int);
	}
	
	va_end(list);
	
	printf("%d\n",s);
	//return s;
}

int main()
{
	sum(5,1,2,3,4,5);
	sum(2,1,2);
	return 0;
}
