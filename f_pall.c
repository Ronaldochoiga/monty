#include "monty.h"
/**
 * f_pall - prints the stack fully
 * @head: stack head pointer
 * @counter: unused
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *j;
	(void)counter;

	j = *head;
	if (j == NULL)
		return;
	while (j)
	{
		printf("%d\n", j->n);
		j = j->next;
	}
}
