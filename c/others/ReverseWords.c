//Reverse words in a sentence
#include <stdio.h>

void reverseword(char s[])
{
	char *start=s,*end=s;
	while(*end!='\0')
	{
		while(*start==' ')
		{
			start++;
		}
		char *temp=start;
		while(*temp!=' ' && *temp!='\0')
		{
			temp++;
		}
		end=temp;
		temp--;
		while(start<temp)
		{
			char a=*start;
			*start=*temp;
			*temp=a;
			start++;
			temp--;
		}
		start=end;
	}
}

int main()
{
	char s[]="my name is prateek sharma";
	reverseword(s);
	printf("%s",s);
	return 0;
}
