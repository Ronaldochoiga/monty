#include "monty.h"
/**
 * addnode - add node to the head stack pointer
 * @head: head pointing to the of the stack
 * @n: new_val
 * Return: void
*/
void addnode(stack_t **head, int n)
{

	stack_t *nnode, *auxiliary;

	auxiliary = *head;
	nnode = malloc(sizeof(stack_t));
	if (nnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxiliary)
		auxiliary->prev = nnode;
	nnode->n = n;
	nnode->next = *head;
	nnode->prev = NULL;
	*head = nnode;
}
