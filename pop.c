#include "monty.h"
/**
 *pop - delete the top stack element
 *@stack: of elements
 *@last_line: number of instruction
 */
void pop(stack_t **stack, unsigned int last_line)
{
	stack_t *tmp;

	if (*stack == '\0')
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", last_line);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = stack[0]->next;
	free(tmp);
}
