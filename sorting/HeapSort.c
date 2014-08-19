//Heap Sort
#include <stdio.h>

void heapify(int a[],int n,int num)
{
	int left=(num*2)+1,right=(num*2)+2,max=num;
	
	if(left<n && a[left]>a[max])
	{
		max=left;
	}
	if(right<n && a[max]<a[right])
	{
		max=right;
	}
	
	if(max!=num)
	{
		int temp=a[max];
		a[max]=a[num];
		a[num]=temp;
		heapify(a,n,max);
	}
}

void heap(int a[],int n)
{
	int i=n/2;
	for(;i>=0;i--)
	{
		heapify(a,n,i);
	}
}

void heapsort(int a[],int n)
{
	int i=n-1;
	heap(a,n);
	
	for(;i>=0;i--)
	{
		printf("%d ",a[0]);
		a[0]=a[i];
		n=n-1;
		heapify(a,n,0);
	}
}

int main()
{
	int a[]={4,5,7,2,1,3,8,9,6,10};
	heapsort(a,10);
	
	return 0;
}
