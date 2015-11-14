//Store a tree into an array
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

void insert(struct node *temp,int a[],int *n)
{
	if(temp!=NULL)
	{
		insert(temp->left,a,n);
		a[(*n)++]=temp->key;
		insert(temp->right,a,n);
	}
}

int main()
{
	root=create(6);
	root->left=create(4);
	root->left->right=create(5);
	root->left->left=create(3);
	root->left->left->left=create(2);
	root->left->left->left->left=create(1);
	
	root->right=create(8);
	root->right->left=create(7);
	root->right->right=create(10);
	root->right->right->left=create(9);
	
	int n=0,a[10],i=0;
	
	insert(root,a,&n);
	for(;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
