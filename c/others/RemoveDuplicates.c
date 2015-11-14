//Remove duplicated in an array
#include <stdio.h>

int main()
{
	int a[]={1,1,2,3,4,4,5,5,5,6};
	//int a[]={1,1,1,1,1,1,1,1,1,1};
	int i=0,j=0;
	
	while(i<10 && j<10)
	{
		while(a[i]==a[j])
		{
			j++;
		}
		i++;
		a[i]=a[j];
	}
	
	for(j=0;j<i;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
