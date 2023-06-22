#include "monty.h"
/**
  *f_rotl- rotate the stack to the top from the bottom
  *@head: stack head pointer
  *@counter: line_num
  *Return: void
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *auxiliary;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxiliary = (*head)->next;
	auxiliary->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = auxiliary;
}
