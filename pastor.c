#include "monty.h"
/**
 * f_pstr - prints the string starting from top to the bottom
 * @head: stack head pointer
 * @counter: line_num
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *j;
	(void)counter;

	j = *head;
	while (j)
	{
		if (j->n > 127 || j->n <= 0)
		{
			break;
		}
		printf("%c", j->n);
		j = j->next;
	}
	printf("\n");
}
