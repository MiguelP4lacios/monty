#include "monty.h"
/**
 * _div - The opcode div divides the second top element of the stack
 * by the top element of the stack
 * @stack: stack represent in a doubly-linked list
 * @line_number: line of the flie
 * Return: nothing
*/
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *first_ele, *second_ele;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	first_ele = *stack;
	second_ele = (*stack)->next;
	if (first_ele->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		release(NULL, NULL, 'r');
		free_dlistint(*stack);
		free(global.line);
		exit(EXIT_FAILURE);
	}
	second_ele->n /= first_ele->n;
	*stack = second_ele;
	second_ele->prev = NULL;
	free(first_ele);
}
