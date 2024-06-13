#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev; 
};

void insertEnd(struct Node **start, int value)
{
	
	if (*start == NULL)
	{
		struct Node *new_node = new Node;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}
	else
	{
		
		struct Node *last = (*start)->prev;
		
		struct Node *new_node = new Node;
		new_node->data = value;
		last->next = new_node;	   
		new_node->prev = last;	   
		new_node->next = (*start); 
		(*start)->prev = new_node; 
	}
}

void display(struct Node *start)
{
	struct Node *temp = start;
	printf("\nTraversal in forward direction \n");
	while (temp->next != start)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
	printf("\nTraversal in reverse direction \n");
	struct Node *last = start->prev;
	while (temp->prev != last)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("%d", temp->data);
}

int main()
{
	
	struct Node *start = NULL;
	
	insertEnd(&start, 5);
	insertEnd(&start, 8);
	insertEnd(&start, 9);
	insertEnd(&start, 3);
	printf("Created circular doubly linked list is : ");
	display(start);
	return 0;
}
