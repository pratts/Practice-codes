//Number to string

#include <stdio.h>
#include <math.h>

int main()
{
	int a=1926391237;
	int size=log10(a)+1;
	char s[10],i=size-1;;
	
	while(a>0)
	{
		int mod=a%10;
		a/=10;
		s[i]=('0'+ mod);
		i--;
	}
		
	printf("%s",s);
	return 0;
}
