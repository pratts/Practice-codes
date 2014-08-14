//Merge two sorted arrays
#include <stdio.h>

int main()
{
	int n=5,m=10,i=0,j=0,k=0;
	int a[]={1,2,3,4,5};
	int b[]={1,1,2,4,5,6,7,8,8,9};
	int temp=0;
	
	int res[15];
	while(i<n && j<m)
	{	
		if(a[i]<b[j])
		{
			temp=a[i++];
		}
		else 
		{
			temp=b[j++];
		}
		while(i<n && temp==a[i])
		{
			i++;
		}
		while(j<m && temp==b[j])
		{
			j++;
		}
		res[k++]=temp;
	}
	
	while(i<n)
	{
		temp=a[i];
		while(i<n && temp==a[i])
		{
			i++;
		}
		res[k++]=temp;
	}
	
	while(j<m)
	{
		temp=b[j];
		while(j<m && temp==b[j])
		{
			j++;
		}
		res[k++]=temp;
	}
	
	for(i=0;i<k;i++)
	{
		printf("%d ",res[i]);
	}
	
	return 0;
}
