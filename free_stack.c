#include "monty.h"
/**
 * free_stack - it frees da doubly linked list
 * @head: head of da stackz
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
