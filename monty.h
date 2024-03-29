#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variable -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values throught the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_reallocs(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdins(char **lineptr, int file);
char  *clean_lines(char *content);
void s_pushs(stack_t **head, unsigned int number);
void s_palls(stack_t **head, unsigned int number);
void s_pints(stack_t **head, unsigned int number);
int executes(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void s_pops(stack_t **head, unsigned int counter);
void s_swaps(stack_t **head, unsigned int counter);
void s_adds(stack_t **head, unsigned int counter);
void s_nops(stack_t **head, unsigned int counter);
void s_subs(stack_t **head, unsigned int counter);
void s_divs(stack_t **head, unsigned int counter);
void s_muls(stack_t **head, unsigned int counter);
void s_mods(stack_t **head, unsigned int counter);
void s_pchars(stack_t **head, unsigned int counter);
void s_pstrs(stack_t **head, unsigned int counter);
void s_rotls(stack_t **head, unsigned int counter);
void s_rotrs(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnodes(stack_t **head, int n);
void addqueues(stack_t **head, int n);
void s_queues(stack_t **head, unsigned int counter);
void s_stacks(stack_t **head, unsigned int counter);
#endif /*_MONTY_*/
