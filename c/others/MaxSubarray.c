//Maximum subarray of a list of numbers
#include <stdio.h>

int maxsum(int a[],int n)
{
	int sum=0;
	int maxsum=0;
	int i=0;
	for(;i<n;i++)
	{
		sum+=a[i];
		if(sum>maxsum)
		{
			maxsum=sum;
		}
		if(sum<0)
		{
			sum=0;
		}
	}
	return maxsum;
}

int main()
{
	int a[]={-4,1,5,-3,2,5,-6,9,4,-2};
	//int a[]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	printf("%d",maxsum(a,10));
	return 0;
}
