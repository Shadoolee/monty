#include "monty.h"
/**
 * s_pops - it prints the topz
 * @head: stack headz
 * @counter: line_number counterz
 * Return: Returnz nothing here
 */
void s_pops(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: cant't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
