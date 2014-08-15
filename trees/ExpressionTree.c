//Expression Tree
#include <stdio.h>
#include <stdlib.h>

struct node
{
	char c;
	struct node *left,*right;
}*root=NULL;

void print(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("(");
		print(temp->left);
		printf("%c",temp->c);
		print(temp->right);
		printf(")");
	}
}

struct node* create(char i)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->c=i;
	
	return temp;
}

int main()
{
	root=create('-');
	root->left=create('*');
	root->left->right=create('3');
	root->left->left=create('3');
	
	
	root->right=create('*');
	root->right->left=create('2');
	root->right->right=create('2');
	
	
	print(root);
	return 0;
}
