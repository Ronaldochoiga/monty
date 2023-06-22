#include "monty.h"
/**
 * f_add - add top 2 elements of the stack
 * @head: pointer to stack head
 * @counter: line_num
 * Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *j;
	int length = 0, auxiliary;

	j = *head;
	while (j)
	{
		j = j->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	auxiliary = j->n + j->next->n;
	j->next->n = auxiliary;
	*head = j->next;
	free(j);
}
