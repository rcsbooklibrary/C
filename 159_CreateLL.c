/*Create a Single Linked list and display elements*/
#include<stdio.h>
#include<malloc.h>

typedef struct node {
	int data;
	struct node *next;
}ll;

int main()
{
	int x,temp,i=0;
	ll *first  = NULL;
	ll *head  = NULL;
	ll *tail = NULL;

	printf("Enter the number of nodes to create a Linked list\n");
	scanf("%d",&x);
	printf("Creating %d nodes\n",x);


	for(i=0;i<x;i++)
	{
		printf("Enter value for node:%d\n",i);
		scanf("%d",&temp);

		if(i==0){
			first = malloc(sizeof(first));	
			first->data = temp;
			first->next = head = malloc(sizeof(head));
			printf("address of first :%p and firts->next:%p\n",first,first->next);

		}else{
			head->data = temp;
			head->next = malloc(sizeof(head));
			head = head->next;	
		}
	}
	head->next = NULL;

	printf("Displaying the nodes\n");
	for(i=0;i<x;i++)
	{
		if(first->next != NULL )
		{
			printf("Value of node at address :%p is %d\n",first,first->data);
			printf("next node address :%p\n",first->next);

		}
		first = first->next;
	}
}
