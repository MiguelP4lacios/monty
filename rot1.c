#include "monty.h"
/**
 *rot1 - swap the first and last values of the stack
 *@stack: stack of values
 *@line_number: line of instruction
 */
void rot1(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *top = '\0', *bottom = '\0';

	top = *stack, bottom = *stack;
	while (bottom->next != '\0')
		bottom = bottom->next;

	top->prev = bottom->prev;
	bottom->prev->next = top;
	bottom->next = top->next;
	top->next->prev = bottom;
	top->next = '\0';
	bottom->prev = '\0';
	stack[0] = bottom;
}
