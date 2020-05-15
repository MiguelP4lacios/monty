#include "monty.h"
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: arguments
 *Return: success
*/
int main(int argc, char **argv)
{
	FILE *in_stream = NULL;
	char *monty_codes = NULL;
	size_t size = 0;
	unsigned int n_line = 0;
	stack_t *pila = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	in_stream = fopen(argv[1], "r");
	if (in_stream == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&monty_codes, &size, in_stream) != EOF)
	{
		n_line++;
		release(&in_stream, &monty_codes, 's');
		if (n_line != '\0')
			free(global.line);
		global.line = format_line(monty_codes);
		if (global.line == NULL || (global.line[0][0] == '\n' ||
		global.line[0][0] == '#'))
			continue;
		else
			get_op_function(&pila, n_line);
	}
	release(NULL, NULL, 'r');
	free(global.line);
	free_dlistint(pila);
	return (EXIT_SUCCESS);
}
