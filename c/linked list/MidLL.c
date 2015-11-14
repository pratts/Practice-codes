//middle of the linked list

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

struct node* findmid()
{
	struct node *fast=head->next,*slow=head;
	while(fast!=NULL)
	{
		if(fast!=NULL && slow!=NULL)
		{
			fast=fast->next;
			slow=slow->next;
			if(fast!=NULL)
			{
				fast=fast->next;
			}
		}
	}
	return slow;
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
	struct node *t=findmid();
	printf("\n%d",t->key);
	return 0;
}
