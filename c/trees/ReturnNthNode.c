//Return pointer to nth node of an inorder traversal of a BST
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

void returnnode(struct node *temp,int n,struct node **t)
{
	static int count;
	static int found;
	if(!found)
	{
		if(temp!=NULL)
		{
			returnnode(temp->left,n,t);
			if(++count==n)
			{
				found=1;
				*t=temp;
			}
			returnnode(temp->right,n,t);
		}	
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
	
	struct node *t;
	returnnode(root,5,&t);
	printf("%d",(t)->key);
	return 0;
}
