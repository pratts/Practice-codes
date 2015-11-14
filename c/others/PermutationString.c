//Permutation of a string
#include <stdio.h>

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}

void permutation(char s[],int i,int n)
{
	if(i==n)
	{
		printf("%s\n",s);
		return;
	}
	else
	{
		int j;
		for(j=i;j<=n;j++)
		{
			swap((s+i),(s+j));
			permutation(s,i+1,n);
			swap((s+i),(s+j));
		}
	}
}

int main()
{
	char s[]="ABC";
	permutation(s,0,2);
	return 0;
}
