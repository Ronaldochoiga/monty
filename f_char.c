#include "monty.h"
/**
 * f_pchar - print char at stack top
 * @head: stack head pointer
 * @counter: line_num
 * Return: void
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *j;

	j = *head;
	if (!j)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (j->n > 127 || j->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", j->n);
}
