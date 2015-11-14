//Create copy of a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *next;
}*head=NULL,*head1=NULL;

void print(struct node *temp)
{
	while(temp!=NULL)
	{
		printf("%d ",temp->key);
		temp=temp->next;
	}
}

void copyll()
{
	struct node *t=head1,*p=head;
	while(p!=NULL)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=p->key;
		temp->next=NULL;
		if(head1==NULL)
		{
			head1=temp;
			t=head1;
		}
		else
		{
			t->next=temp;
			t=temp;
		}
		p=p->next;
	}
}

int main()
{
	int i=1;
	for(;i<11;i++)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=i;
		temp->next=head;
		head=temp;
	}
	print(head);
	copyll();
	printf("\n");
	print(head1);
	return 0;
}
