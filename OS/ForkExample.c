#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t a=fork();
	pid_t b=fork();
	printf("%d %d",a,b);
	
	return 0;
}
