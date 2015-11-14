//Free the nodes of linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *next;
}*head=NULL;

void print()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->key);
		temp=temp->next;
	}
}

void deletell()
{
	struct node *temp=head;
	while(head!=NULL)
	{
		head=head->next;
		free(temp);
		temp=head;
	}
}

int main()
{
	int i=1;
	for(;i<=10;i++)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=i;
		temp->next=head;
		head=temp;
	}
	print();
	printf("\n");
	deletell();
	print();
	
	return 0;
}
