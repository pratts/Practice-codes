//Reverse a singly linked list
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

void reversell()
{
	struct node *pre=NULL,*cur=head,*temp=head;
	
	while(cur!=NULL)
	{
		cur=cur->next;
		temp->next=pre;
		pre=temp;
		temp=cur;
	}
	head=pre;
}

int main()
{
	int i=0;
	for(;i<10;i++)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=i;
		temp->next=head;
		head=temp;
	}
	print();
	reversell();
	printf("\n");
	print();
	return 0;
}
