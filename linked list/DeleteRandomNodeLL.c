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

void deletenode(struct node *del)
{
	//struct node *temp=del;
	while(del->next!=NULL)
	{
		del->key=del->next->key;
		del=del->next;
	}
	free(del);
}

int main()
{
	int i=0;
	struct node *del=NULL;
	for(;i<10;i++)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=i;
		temp->next=head;
		head=temp;
		if(i==5)
		{
			del=temp;
		}
	}
	
	print();
	printf("\n");
	deletenode(del);
	print();
	return 0;
}
