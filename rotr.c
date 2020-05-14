#include "monty.h"
/**
 *rotr - swap the first and last values of the stack
 *@stack: stack of values
 *@line_number: line of instruction
 */
void rotr(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *top = '\0', *bottom = '\0';

	if (stack == '\0' || *stack == '\0')
		return;
	top = *stack, bottom = *stack;
	while (bottom->next != '\0')
		bottom = bottom->next;

	top->prev = bottom;
	bottom->next = top;
	bottom->prev->next = '\0';
	bottom->prev = '\0';
	stack[0] = bottom;
}
