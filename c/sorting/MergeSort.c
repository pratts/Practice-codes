//Merge Sort

#include <stdio.h>
#include <limits.h>

void merge(int a[],int low,int mid,int high)
{
	int l=mid-low+1,r=high-mid,i,j,k;
	int left[l],right[r];
	
	for(i=0;i<l;i++)
	{
		left[i]=a[low+i];
	}
	for(j=0;j<r;j++)
	{
		right[j]=a[mid+j+1];
	}
	
	k=low,j=0,i=0;
	while(i<l && j<r)
	{
		if(left[i]<right[j])
		{
			a[k++]=left[i++];
		}
		else 
		{
			a[k++]=right[j++];
		}
	}
	
	while(i<l)
	{
		a[k++]=left[i++];
	}
	
	while(j<r)
	{
		a[k++]=right[j++];
	}
	
}

void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(high+low)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

int main()
{
	int a[]={7,3,5,4,6,9,8,10,1,2};
	//int a[]={1,2,3,4,6,7,8,9,10,5};
	mergesort(a,0,9);
	
	int i=0;
	for(;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
