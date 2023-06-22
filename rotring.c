#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom from  the top
  *@head: stack head pointer
  *@counter: line_num
  *Return: void
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
