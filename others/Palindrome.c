//Check for palindrome
#include <stdio.h>

void palindrome(char *s)
{
	char *p=s;
	while(*p!='\0')
	{
		p++;
	}
	p--;
	while(s<p)
	{
		if(*s!=*p)
		{
			printf("Not palindrome");
			return;
		}
		s++;
		p--;
	}
	printf("Palindrome");
}

int main()
{
	char *s="prateek",*p="nitin";
	palindrome(s);
	return 0;
}
