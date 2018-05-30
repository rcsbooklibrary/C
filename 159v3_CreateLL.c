/*Read LL Reverse*/
#include<stdio.h>
#include<malloc.h>

typedef struct node {
	int data;
	struct node *next;
}ll;

ll *CreateLlist( ll *first,ll *head, int x);
int DisplayNodes(ll *first,ll *head, int x);

int main()
{
	ll *first = 0;
	ll *head  = 0;
	int x =0;
	printf("Enter the number of nodes to create a Linked list\n");
	scanf("%d",&x);
	printf("Creating %d nodes\n",x);
	first = CreateLlist( first, head, x);
	
	DisplayNodes(first, head, x);


}

ll *CreateLlist( ll *first,ll *head, int x)
{
	int i=0;
	ll *tm  = NULL;
	//*first  = NULL;
	//*head  = NULL;



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
	return first;
}

int DisplayNodes(ll *first,ll *head, int x)
{
	int i=0;

	printf("Displaying the nodes\n");
	for(i=0;i<x;i++)
	{
		if(i == 0){
			printf("Value of node at address :%p is %d and next node address is %p\n"
											,first,first->data,first->next);
			head = first->next; 	
		}else{
			//	if(head->next != NULL )
			//	{
			printf("Value of node at address :%p is %d and next node address is %p\n"
											,head,head->data,head->next);
			head = head->next;

			//	}
		}
	}
}
