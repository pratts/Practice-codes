//Detect loop in linked list

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

int detectloop()
{
	struct node *fast=head->next,*slow=head;
	//printf("\ndetectloop");
	while(1)
	{
		if(fast==slow)
		{
			//printf("loop detected");
			return 1;
		}
		
		if(fast!=NULL && slow!=NULL)
		{
			fast=fast->next;
			slow=slow->next;
			if(fast!=NULL)
			{
				fast=fast->next;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	int i=0;
	struct node *t=NULL;
	for(;i<10;i++)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=i;
		temp->next=head;
		head=temp;
		t=temp;
	}
	t->next=head;
	//print();
	printf("%s",detectloop()==1?"Loop detected":"No loop");
	return 0;
}
