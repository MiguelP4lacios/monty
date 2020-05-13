#include "monty.h"
/**
 *pall - print the elements into the stack in Lifo way
 *@stack: stack of elements
 *@last_line: command line
 *
 */
void pall(stack_t **stack,  __attribute__((unused))unsigned int last_line)
{
	stack_t *stack_print;

	stack_print = *stack;
	if (stack_print == '\0')
		return;
	while (stack_print != '\0')
	{
		printf("%i\n", stack_print->n);
		stack_print = stack_print->next;
	}
}
