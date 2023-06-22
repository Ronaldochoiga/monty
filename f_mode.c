#include "monty.h"
/**
 * f_mod - computes rest of division of sec top elem
 * @head: stack head pointer
 * @counter: line_num
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	if (j->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxiliary = j->next->n % j->n;
	j->next->n = auxiliary;
	*head = j->next;
	free(j);
}
