#include "monty.h"
/**
 * s_pstrs - printz da stringz startingz at da top of da stack,
 * followed by a new
 * @head: stack headz
 * @counter: line_numberz counterz
 * Return: It returnz nothing
 */
void s_pstrs(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
