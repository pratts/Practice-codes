//Heap's algorithm to print permutation of characters in a string
//Source: http://en.wikipedia.org/wiki/Heap%27s_algorithm
#include <stdio.h>

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}

void generate(int i,int n,char a[])
{
	if(i==n)
	{
		printf("%s\n",a);
	}
	else
	{
		int j;
		for(j=i;j<=n;j++)
		{
			swap((a+j),(a+i));
			generate(i+1,n,a);
			swap((a+j),(a+i));
		}
	}
}

int main()
{
	char a[]="abcd";
	generate(0,3,a);
	return 0;
}
