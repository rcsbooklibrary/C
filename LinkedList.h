#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>


typedef struct NODE{
	void *data;
	struct NODE *next;
}node;

typedef struct LinkedList{
	int size;
	node *head;
	node *tail;
	void(*destroy)(void *data);
}linkedlist;

void list_init(linkedlist *mylist, void(*destroy)(void *data));
int list_insert_next(linkedlist *mylist, void *data);
void print_nodes(linkedlist *mylist);


#endif
