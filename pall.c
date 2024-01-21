#include "monty.h"
/**
 * s_palls - it prints the stackz
 * @head: stackz headz
 * @counter: no need for the line counter
 * Return: Returnz nothing here
 */
void s_palls(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
