//Tower of hanoi
#include <stdio.h>

void towerofhanoi(int n,char a,char b,char c)
{
	if(n>0)
	{
		towerofhanoi(n-1,a,c,b);
		printf("%c->%c\n",a,c);
		towerofhanoi(n-1,b,a,c);
	}
}

int main()
{
	towerofhanoi(3,'A','B','C');
	return 0;
}
