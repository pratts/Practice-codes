//Find mirror image of a tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

void mirror(struct node *temp)
{
	if(temp!=NULL)
	{
		mirror(temp->left);
		mirror(temp->right);
		
		struct node *t1=temp->left;
		temp->left=temp->right;
		temp->right=t1;
	}		
}

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
	
	printtree(root);
	printf("\n");
	mirror(root);
	printtree(root);
	return 0;
}
