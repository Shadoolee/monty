#include "monty.h"
/**
 * executes - executes da opcodez
 * @stack: head linked listz - stackz
 * @counter: line_counterz counterz
 * @file: pointerz to monty filez
 * @content: the line contentz
 * Return: it return nothing here
 */
int executes(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", s_pushs}, {"pall", s_palls}, {"pint", s_pints},
		{"pop", s_pops}, {"swap", s_swaps}, {"add", s_adds},
		{"nop", s_nops}, {"sub", s_subs}, {"div", s_divs},
		{"mul", s_muls},
		{"mod", s_mods},
		{"pchar", s_pchars},
		{"pstr", s_pstrs},
		{"rotl", s_rotls},
		{"rotr", s_rotrs},
		{"queue", s_queues},
		{"stack", s_stacks},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
