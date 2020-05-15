#include "monty.h"
/**
 * pstr - The opcode pstr prints the string starting at
 * the top of the stack, followed by a new line.
 * @stack: stack
 * @line_number: line number
 * Return:nothing
*/
void pstr(stack_t **stack,  __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		if (tmp->n > 32 && tmp->n < 127)
			printf("%c", (int)tmp->n);
		else
			break;
		tmp = tmp->next;
	}
	printf("\n");
}
