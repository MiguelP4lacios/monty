#include "monty.h"
/**
 *rotl - get the top element to bottom
 *@stack: stack elements
 *@line_number: number of instructions
 */
void rotl(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *top, *bottom;

	top = *stack, bottom = *stack;
	while (bottom->next != '\0')
		bottom = bottom->next;
	bottom->next = top;
	top->prev = bottom;
	top->next->prev = '\0';
	*stack = top->next;
	top->next = '\0';
}
