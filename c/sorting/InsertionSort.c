//Insertion Sort

#include <stdio.h>

void insertionsort(int a[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}


int main()
{
	//int a[]={7,3,5,4,6,9,8,10,1,2};
	int a[]={1,2,3,4,6,7,8,9,10,5};
	insertionsort(a,10);
	
	int i=0;
	for(;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
