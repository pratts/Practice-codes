//Compare two trees
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL,*root1=NULL;

int comparetree(struct node *temp1,struct node *temp2)
{
	if(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->key!=temp2->key)
		{
			return 0;
		}
		else
		{
			return (comparetree(temp1->left,temp2->left) && comparetree(temp1->right,temp2->right));
		}
	}
	else if((temp1==NULL && temp2!=NULL) || (temp1!=NULL && temp2==NULL))
	{
		return 0;
	}
	else
	{
		return 1;
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
	
	root1=create(6);
	root1->left=create(4);
	root1->left->right=create(5);
	root1->left->left=create(3);
	root1->left->left->left=create(2);
	root1->left->left->left->left=create(1);
	
	root1->right=create(8);
	root1->right->left=create(7);
	root1->right->right=create(10);
	root1->right->right->left=create(0);
	
	printf("%s",comparetree(root,root1)==1?"Equal":"Not equal");
	return 0;
}
