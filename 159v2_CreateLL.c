
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
	ll *tm  = NULL;
	ll *head  = NULL;
	ll *tail = NULL;

	printf("Enter the number of nodes to create a Linked list\n");
	scanf("%d",&x);
	printf("Creating %d nodes\n",x);


	for(i=0;i<x;i++)
	{
		head = malloc(sizeof(head));
		printf("Enter value for node:%d\n",i);
		scanf("%d",&head->data);
		printf("address of node:%d is %p\n",i,head);

		if(i==0){
			first = tm = head;

		}else{
			tm->next = head;	
			tm = head;

		}
	}
	head->next = NULL;

	printf("Displaying the nodes\n");
	for(i=0;i<x;i++)
	{
		if(i == 0){
			printf("Value of node at address :%p is %d\n",first,first->data);
			head = first->next; 	
		}else{
		//	if(head->next != NULL )
		//	{
				printf("Value of node at address :%p is %d\n",head,head->data);
				head = head->next;

		//	}
		}
	}
}
