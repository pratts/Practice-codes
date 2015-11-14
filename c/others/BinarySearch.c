//Binary search
#include <stdio.h>

int binarysearch(int a[],int num,int low,int high)
{
	if(low<high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==num)
		{
			return 1;
		}
		else if(a[mid]>num)
		{
			return binarysearch(a,num,low,mid-1);
		}
		else
		{
			return binarysearch(a,num,mid+1,high);
		}
	}
	else
	{
		return -1;
	}
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	printf("%s",binarysearch(a,51,0,9)==1?"Number found":"Not found");
	return 0;
}
