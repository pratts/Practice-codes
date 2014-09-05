//Rotate matrix by 90 degrees

#include <stdio.h>

void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}

void rotate(int n,int m,int a[n][m])
{
	int minx=0,miny=0,maxx=n-1,maxy=m-1,i,j;
	
	while(minx<maxx && miny<maxy)
	{
		i=miny,j=minx;
		while(i<maxy && j<maxx)
		{
			int temp=a[minx][i];
			a[minx][i]=a[j][maxy];
			a[j][maxy]=temp;
			i++;
			j++;
		}
		
		i=miny,j=maxy;
		while(i<maxy && j>miny)
		{
			int temp=a[minx][i];
			a[minx][i]=a[maxx][j];
			a[maxx][j]=temp;
			i++;
			j--;
		}
		
		i=minx,j=maxx;
		while(i<maxy && j>minx)
		{
			int temp=a[minx][i];
			a[minx][i]=a[j][miny];
			a[j][miny]=temp;
			i++;
			j--;
		}
		
		minx++;
		maxx--;
		miny++;
		maxy--;
	}
}

int main()
{
	int n=5,m=5,i,j,a[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			a[i][j]=i*n+j+1;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d ",a[i][j]);
		}printf("\n");
	}
	
	rotate(n,m,a);
	printf("\nAfter rotation\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%2d ",a[i][j]);
		}printf("\n");
	}
	
	return 0;
}
