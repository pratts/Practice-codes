//Find the number of elements a tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left,*right;
}*root=NULL;

void numberofelements(struct node *temp,int *num)
{
	if(temp!=NULL)
	{
		numberofelements(temp->left,num);
		numberofelements(temp->right,num);
		(*num)++;
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
	
	int num=0;
	numberofelements(root,&num);
	printf("%d",num);
	return 0;
}
