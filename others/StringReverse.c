//Reverse a string
#include <stdio.h>

void stringreverse(char s[])
{
	char *a=s,*t=s;
	while(*a!='\0')
	{
		a++;
	}
	a--;
	while(t<a)
	{
		char temp=*t;
		*t=*a;
		*a=temp;
		t++;
		a--;
	}
	printf("%s",s);
}

int main()
{
	char s[]="my name is prateek sharma";
	stringreverse(s);
	
	return 0;
}
