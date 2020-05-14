#include "monty.h"
/**
 * 
 * 
 * 
 * 
*/
char **line = NULL;
int main(int argc, char **argv)
{
	FILE *in_stream = NULL;
	char *monty_codes = NULL;
	size_t size = 0;
	unsigned int n_line;
	stack_t *pila = NULL;
	
	if (argc != 2)
	{
		fprintf(stderr,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	in_stream = fopen(argv[1], "r");
	if (in_stream == NULL)
	{
		fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&monty_codes, &size, in_stream) != EOF)
	{
		n_line++;
		line = format_line(monty_codes);
		if (line[0] == NULL)
			continue;
		else
			get_op_function(&pila, n_line);
	}
	free(monty_codes);
	fclose(in_stream);
	return (EXIT_SUCCESS);
}
