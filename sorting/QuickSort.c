//Quick Sort

#include <stdio.h>

int partition(int a[],int p,int q)
{
	int i=p-1,j,key=a[q];
	
	for(j=p;j<=q;j++)
	{
		if(a[j]<key)
		{
			i++;
			int temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	
	i++;
	int temp=a[i];
	a[i]=key;
	a[q]=temp;
	return i;
}

void quicksort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main()
{
	int a[]={7,3,5,4,6,9,8,10,1,2};
	//int a[]={1,2,3,4,6,7,8,9,10,5};
	quicksort(a,0,9);
	
	int i=0;
	for(;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
