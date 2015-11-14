//nth node from the end in a linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *next;
}*head=NULL;

void nthnode(int n)
{
	struct node *t1=head,*t2=head;
	int i=0;
	for(;(i<n) & (t1!=NULL);i++,t1=t1->next);
	while(t1!=NULL)
	{
		t1=t1->next;
		t2=t2->next;
	}
	printf("%d",t2->key);
}

int main()
{
	int i=10;
	for(;i>0;i--)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->key=i;
		temp->next=head;
		head=temp;
	}
	nthnode(3);
	return 0;
}
