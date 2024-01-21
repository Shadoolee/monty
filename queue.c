#include "monty.h"
/**
 * s_queues - it printz da top
 * @head: stackz headz
 * @counter: line_numberz counterz
 * Return: it returnz nothing here
 */
void s_queues(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueues - it adds node to da tail stack
 * @n: new_valuez
 * @head: headz of da stackz
 * Return: it returnz nothing
 */
void addqueues(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
