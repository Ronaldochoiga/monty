#include "monty.h"
/**
 * f_div - divide top element of stack
 * @head: stack head poinnter
 * @counter: line num
 * Return: void
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	auxiliary = j->next->n / j->n;
	j->next->n = auxiliary;
	*head = j->next;
	free(j);
}
