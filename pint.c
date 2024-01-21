#include "monty.h"
/**
 * s_pints - it prints the top
 * @head: stack the head
 * @counter: line_number counter
 * Return: Return nothing
 */
void s_pints(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
