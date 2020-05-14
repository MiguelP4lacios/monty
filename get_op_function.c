#include "monty.h"
/**
 * 
 * 
 * 
*/
void get_op_function(stack_t **top, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};
	int i;

	for(i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(line[0], ops[i].opcode) == 0)
		{
			ops[i].f(top, line_number);
			return;
		}
	}
	if (ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, line[0]);
		exit(EXIT_FAILURE);
	}
}
