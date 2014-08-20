//Selection Sort
#include <stdio.h>

void selectionsort(int a[],int n)
{
	int i,j,min,index;
	
	for(i=0;i<n;i++)
	{
		min=a[i];
		index=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<min)
			{
				index=j;
				min=a[j];
			}
		}
		int temp=a[i];
		a[i]=a[index];
		a[index]=temp;	
	}
}

int main()
{
	int i,a[]={6,2,1,5,4,3,7,9,10,8};
	selectionsort(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
