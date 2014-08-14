//level order traversal of a tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

int max(int a,int b)
{
	return ((a>b)?a:b);
}

int height(struct node *temp)
{
	if(temp==NULL)
	{
		return 0;
	}
	else
	{
		int rheight=height(temp->right);
		int lheight=height(temp->left);
		
		return 1+max(lheight,rheight);
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

void levelorder(struct node *temp,int i)
{
	if(temp!=NULL)
	{
		if(i==0)
		{
			printf("%d ",temp->key);
			return;
		}
		levelorder(temp->left,i-1);
		levelorder(temp->right,i-1);
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
	
	int h=height(root),i=0;
	for(;i<h;i++)
	{
		levelorder(root,i);
		printf("\n");
	}
	return 0;
}
