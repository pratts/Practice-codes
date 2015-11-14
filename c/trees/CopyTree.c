//Create a copy of a tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

void printtree(struct node *temp)
{
	if(temp!=NULL)
	{
		printtree(temp->left);
		printf("%d ",temp->key);
		printtree(temp->right);
	}
}

struct node* create(int i)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->key=i;
	
	return temp;
}
struct node* copytree(struct node *temp)
{
	struct node *copy=NULL;
	if(temp!=NULL)
	{
		copy=create(0);
		copy->key=temp->key;
		copy->left=copytree(temp->left);
		copy->right=copytree(temp->right);
	}
	return copy;
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
	
	struct node *copy=copytree(root);
	
	printtree(root);
	printf("\n");
	printtree(copy);
	return 0;
}
