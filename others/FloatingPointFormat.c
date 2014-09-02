//Floating point format

#include <stdio.h>
#include <stdlib.h>
struct node
{
	float num;
};

int main()
{
	struct node *n=malloc(sizeof(struct node));
	scanf("%f",&(n->num));
	
	printf("%.0f",n->num);
		
	return 0;
}
