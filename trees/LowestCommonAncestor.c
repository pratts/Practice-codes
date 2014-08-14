//Lowest common ancestor
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

struct node* LCA(struct node *temp,int n1,int n2)
{
	if(temp==NULL)
	{
		return NULL;
	}
	if(temp->key==n1 || temp->key==n2)
	{
		return temp;
	}
	
	struct node *l=LCA(temp->left,n1,n2);
	struct node *r=LCA(temp->right,n1,n2);
	
	if(l && r)
	{
		return temp;
	}
	
	return (l!=NULL?l:r);
}

struct node* create(int i)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->key=i;
	
	return temp;
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
	
	struct node *temp=LCA(root,7,9);
	printf("%d",temp->key);
	return 0;
}
