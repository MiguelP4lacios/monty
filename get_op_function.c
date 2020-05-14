#include "monty.h"
/**
 *get_op_function - execute the monty instructions
 *@head: stack
 *@line_number: instruction number
 */
void get_op_function(stack_t **head, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(line[0], ops[i].opcode) == 0)
		{
			ops[i].f(head, line_number);
			return;
		}
	}
	if (ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, line[0]);
		free(line);
		free_dlistint(*head);
		release(NULL, NULL, 'r');
		exit(EXIT_FAILURE);
	}
}
