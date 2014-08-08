//Compare linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *next;
}*head=NULL,*head1=NULL;

int compare()
{
	struct node *t1=head,*t2=head1;
	while(t1!=NULL || t2!=NULL)
	{
		if(t1->key!=t2->key)
		{
			return 0;
		}
		t1=t1->next;
		t2=t2->next;
	}
	if(t1==NULL && t2==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		struct node *t1=(struct node*)malloc(sizeof(struct node));
		struct node *t2=(struct node*)malloc(sizeof(struct node));
		
		t1->key=i;
		t1->next=head;
		head=t1;
		
		t2->key=i+1;
		t2->next=head1;
		head1=t2;
	}
	printf("%s",compare()==1?"Same":"Different");
	return 0;
}
