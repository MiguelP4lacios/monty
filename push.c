#include "monty.h"
/**
 *push - Filo function, put the element onto the stack
 *@stack: stack
 *@last_line: command line
 */
void push(stack_t **stack, __attribute__((unused))unsigned int last_line)
{
	stack_t *new, *tmp;

	if (line[1][0] < 48 || line[1][0] > 57)
	{
		fprintf(stderr, "L%i: usage: push integer\n", last_line);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	new = malloc(sizeof(stack_t));
	if (new == '\0')
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->next = '\0';
	new->n = atoi(line[1]);
	new->prev = '\0';
	*stack = new;
	new->next = tmp;
	if (tmp != '\0')
		tmp->prev = new;
}
