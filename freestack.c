#include "monty.h"
/**
* free_stack - to free the doub link list
* @head: head to the pointer of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *auxiliary;

	auxiliary = head;
	while (head)
	{
		auxiliary = head->next;
		free(head);
		head = auxiliary;
	}
}
