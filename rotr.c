#include "monty.h"
/**
 * s_rotrs - rotates da stackz to da bottom
 * @head: stackz headz
 * @counter: line_numberz
 * Return: Nothing to return here
 */
void s_rotrs(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
