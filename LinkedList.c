#include "LinkedList.h"
#include <stdlib.h>

node *LLnode;

int main()
{
	int a =10, b=20, c=45,d=55,e=65;
	linkedlist Mylist;
	list_init(&Mylist, free);
	list_insert_next(&Mylist,&a);
	list_insert_next(&Mylist,&b);
	list_insert_next(&Mylist,&c);
	list_insert_next(&Mylist,&d);
	list_insert_next(&Mylist,&e);
	print_nodes(&Mylist);

}

void list_init(linkedlist *mylist, void(*destroy)(void *data))
{
	mylist->size =0;
	mylist->head = NULL;
	mylist->tail = NULL;
	mylist->destroy = destroy;
}


int list_insert_next(linkedlist *mylist, void *data)
{
	int *val = (int*)data;
	LLnode = ((node	*)malloc(sizeof(node)));
	if(LLnode == NULL)
		return -1;
	//	printf("node value is %d\n", *val);	
	if(mylist->size == 0){
		/*if size is 0, then the created node is head*/
		mylist->head = LLnode;
		LLnode->next = mylist->tail;
		mylist->tail = LLnode;		
	}else if(mylist->size == 1){
		mylist->head->next = LLnode;		
//		printf("head->next is %p\n", LLnode );	
		LLnode->next = mylist->tail;
		mylist->tail = LLnode;		
	}else{
		LLnode->next = mylist->tail;
		mylist->tail = LLnode;		
//		printf("Current tail is %p\n", LLnode );	
	}
	//	LLnode->data = data;
	LLnode->data = val;
	mylist->size++;
	printf("New node address is %p contains value %d Size of linkedlist is %d\n", LLnode, *val,  mylist->size);	
	return 0;
}

void print_nodes(linkedlist *mylist)
{
	int index =0;
	node *PrintNode = mylist->head;	
	//int *data = (int*)PrintNode->data;
	int *data;
	for(index = 0; index < mylist->size; index++)
	{
		data = (int*)PrintNode->data;
		printf("Value %d is stored at %p\n", *data, PrintNode);
	//	printf("Value %d is stored at %p\n", *data, mylist->head->next);
		PrintNode = PrintNode->next;
	
	}	
}

