#include "monty.h"
/**
 *pchar - print the top element of the stack as ascii
 *@stack: strack elements
 *@line_number: number of instruction
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (stack == '\0' || stack[0] == '\0')
	{
		fprintf(stderr, "L%i: can't pchar, stack empty\n", line_number);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	if (stack[0]->n < 32 || stack[0]->n > 126)
	{
		fprintf(stderr, "L%i: can't pchar, value out of range\n", line_number);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", stack[0]->n);
}
