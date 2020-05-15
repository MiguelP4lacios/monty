#include "monty.h"
/**
 *push_end - put element at the end of the stack
 *@stack: stack elements
 *@new_stack: new element
 *
 */
void push_end(stack_t **stack, stack_t *new_stack)
{

	stack_t *node;

	if (*stack == '\0')
	{
		*stack = new_stack;
		return;
	}
	node = *stack;
	while (node->next != '\0')
		node = node->next;
	new_stack->prev = node;
	node->next = new_stack;
}
