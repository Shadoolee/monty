#include "monty.h"
/**
 * s_rotls - diz rotatez da stackz to da top
 * @head: stackz headz
 * @counter: line_numberz counterz
 * Return: It returnz nothing here
 */
void s_rotls(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
