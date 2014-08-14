//Check BST

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

int checkbst(struct node *temp,int max,int min)
{
	if(temp==NULL)
	{
		return 1;
	}
	if(temp->key > max || temp->key<min)
	{
		return 0;
	}
	else
	{
		return (checkbst(temp->left,temp->key,min) && checkbst(temp->right,max,temp->key));
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
	
	printf("%s",checkbst(root,10000,-10000)==1?"BST":"NOT BST");
	return 0;
}
