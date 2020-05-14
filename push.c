#include "monty.h"
/**
 *push - Filo function, put the element onto the stack
 *@stack: stack
 *@last_line: command line
 */
void push(stack_t **stack, __attribute__((unused))unsigned int last_line)
{
	stack_t *new, *tmp;

	if (check_num(line[1]) == -1)
	{
		fprintf(stderr, "L%i: usage: push integer\n", last_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(line);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	new = malloc(sizeof(stack_t));
	if (new == '\0')
	{
		fprintf(stderr, "Error: malloc failed\n");
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(line);
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
