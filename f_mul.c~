#include "monty.h"
/**
 * f_mul - multiplies top 2 elems.
 * @head: stack head pointer
 * @counter: line_num
 * Return: void
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	auxiliary = j->next->n * j->n;
	j->next->n = auxiliary;
	*head = j->next;
	free(j);
}
