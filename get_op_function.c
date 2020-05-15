#include "monty.h"
/**
 *get_op_function - execute the monty instructions
 *@top: stack
 *@line_number: instruction number
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
		{"swap", swap},
		{"rotl", rotl},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(global.line[0], ops[i].opcode) == 0)
		{
			ops[i].f(top, line_number);
			return;
		}
	}
	if (ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number,
		global.line[0]);
		free(global.line);
		free_dlistint(*top);
		release(NULL, NULL, 'r');
		exit(EXIT_FAILURE);
	}
}
