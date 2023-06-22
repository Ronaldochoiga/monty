#include "monty.h"
/**
 * f_pop - prints the top of the stack
 * @head: stack head pointer
 * @counter: line_num
 * Return: void
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *j;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	*head = j->next;
	free(j);
}
