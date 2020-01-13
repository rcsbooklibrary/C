#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}node;

int InsertNode(node **head, int data, int position);
int RemoveNode(node **head,int position);
void PrintNodes(node *Start);
node *head;

void main()
{
	int data[10] = {4,8,10,12,14,16,18};
	 InsertNode(&head,data[1] , 1);
	 InsertNode(&head,data[2] , 1);
	 InsertNode(&head,data[3] , 1);
	 InsertNode(&head,data[4] , 1);
	 InsertNode(&head,data[5] , 1);
	 InsertNode(&head,data[6] , 2);
	// PrintNodes(head);
	 RemoveNode(&head,2);
	 PrintNodes(head);
}

/*Creates and inserts a linked list*/

int InsertNode(node **head, int data, int position)
{
	int k =1;
	node *p, *q, *NewNode;
	NewNode = (node*)malloc(sizeof(node));
	if(NewNode == NULL)
		return -1;
	NewNode->data = data;
	p = *head;    /*Save head address in p*/
	if(position ==1)
	{
		NewNode->next = p; /* NewNode's next address is the current head*/
		*head = NewNode;  /* NewNode is the head now */
	}else{
		while((p->next!=NULL) && ( k<position)){
			k++;     /* Increment k to traverse the linked list */
			q = p;   /* Starting from head address, We need the address of two nodes. It is between these two nodes the new node will be 
			  	   inserted. i.e.. after q. Here the position is decided by incrementing k.*/
			p = p->next;
		}

		q->next = NewNode;  /* Position to insert the new node is computed by the above while loop and the variables q and p have the addresses
				    where the new node is to be inserted */
		NewNode->next = p;	
	}
} /*InsertNode*/

 /* Removes a node */
int RemoveNode(node **head,int position)
{
	int k =1;
	node *p, *q, *r;  /*Need three node variables to delete a node'p'  and point the next of node 'q' to 'r'*/
	p = *head;             /*copy head address to  p*/
	while(k < position){
		k++;              
		q = p;         /**/   
		p = p->next;
		r = p->next;	
	}
	printf("Removing %p at position %d between %p and %p\n", p,position,q,r);
	free(p);
	q->next = r;
}

/*Prints the contents of linkedlist*/
void PrintNodes(node *Start)
{
	do{
		printf("%d\t",Start->data);
		Start = Start->next;
	//}while(Start->next!=NULL);
	}while(Start!=NULL);
}
