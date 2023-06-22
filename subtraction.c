#include "monty.h"
/**
  *f_sub- subtration function
  *@head: stack head pointer
  *@counter: line_num
  *Return: void
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxiliary;
	int sus, ndes;

	auxiliary = *head;
	for (ndes = 0; auxiliary != NULL; ndes++)
		auxiliary = auxiliary->next;
	if (ndes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxiliary = *head;
	sus = auxiliary->next->n - auxiliary->n;
	auxiliary->next->n = sus;
	*head = auxiliary->next;
	free(auxiliary);
}
