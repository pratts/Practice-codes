//Sum of digits in a single line
#include <stdio.h>
int main()
{
	int n=234,sum=0;
	for(;n>0;sum+=n%10,n/=10);
	printf("%d",sum);
	
	return 0;
}
