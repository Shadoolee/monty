#include "monty.h"
/**
 * s_pushs - it adds node to the stackz
 * @head: stackz head
 * @counter: line_number counterz
 * Return: Returns nothing
 */
void s_pushs(stack_t **head, unsigned int counter)
{
	int d, e = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '_')
			e++;
		for (; bus.arg[e] != '\0'; e++)
		{
			if (bus.arg[e] > 57 || bus.arg[e] < 48)
				flag = 1;
		}
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	d = atoi(bus.arg);
	if (bus.lifi == 0)
		addnodes(head, d);
	else
		addqueues(head, d);
}
