/**
 * addqueue - adds ndes to the back of the stack
 * @n: new_value achieved
 * @head: pointer to head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nnode, *auxiliary;

	auxiliary = *head;
	nnode = malloc(sizeof(stack_t));
	if (nnode == NULL)
	{
		printf("Error\n");
	}
	nnode->n = n;
	nnode->next = NULL;
	if (auxiliary)
	{
		while (auxiliary->next)
			auxiliary = auxiliary->next;
	}
	if (!auxiliary)
	{
		*head = nnode;
		nnode->prev = NULL;
	}
	else
	{
		auxiliary->next = nnode;
		nnode->prev = auxiliary;
	}
}
