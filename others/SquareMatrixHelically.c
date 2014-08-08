#include <stdio.h>

void m(int a[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}printf("\n");
	}
	printf("\n\n");
}
void print(int a[5][5])
{
	int minx=0,miny=0,maxx=4,maxy=4,count=25,i;
	
	while(count>0)
	{
		for(i=miny;i<=maxy;i++)
		{
			printf("%d ",a[minx][i]);
			count--;
		}
		minx++;
		for(i=minx;i<=maxx;i++)
		{
			printf("%d ",a[i][maxy]);
			count--;
		}
		maxy--;
		for(i=maxy;i>=miny;i--)
		{
			printf("%d ",a[maxx][i]);
			count--;
		}
		maxx--;
		for(i=maxx;i>=minx;i--)
		{
			printf("%d ",a[i][miny]);
			count--;
		}
		miny++;
	}
}

int main()
{
	int a[5][5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=i*5+j;
		}
	}
	m(a);
	print(a);
	return 0;
}
