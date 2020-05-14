#include "monty.h"
/**
 * 
 * 
 * 
*/
void pstr(stack_t **stack,  __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		if (tmp->n > 32 && tmp->n < 127)
			printf("%c",(int)tmp->n);
		else
			break;
		tmp = tmp->next;
	}
	printf("\n");
}
