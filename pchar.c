#include "monty.h"
/**
 * s_pchars - printz da char for character at da top of da stackz follwd by
 * newline
 * @head: stackz headz
 * @counter: line_numberz counterz
 * Return: Nothing to return here
 */
void s_pchars(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't s_pchars, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't s_pchars, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
