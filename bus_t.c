#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t sze = 0;
	ssize_t rline = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rline > 0)
	{
		cont = NULL;
		rline = getline (&cont, &sze, file);
		bus.cont = cont;
		counter++;
		if (rline > 0)
		{
			execute(cont, &stack, counter, file);
		}
		free(cont);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
