//Count number of binary trees
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

struct node* create(int i)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->key=i;
	
	return temp;
}

int count(int N)
{
	if(N==1 || N==0)
	{
		return 1;
	}
	else
	{
		int sum=0,l=0,r=0,k;
		for(k=1;k<=N;k++)
		{
			l=count(k-1);
			r=count(N-k);
			sum+=l*r;
		}
		return sum;
	}
}

int main()
{
	int i=0;
	for(;i<10;i++)
	{
		printf("%d\n",count(i));
	}	
	return 0;
}
