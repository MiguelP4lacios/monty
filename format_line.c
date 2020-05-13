#include "monty.h"
/**
 * 
 * 
 * 
 * 
*/
char **format_line(char *input)
{
	char **tokens;
	char *token;
	size_t i = 0;

	tokens = malloc(sizeof(char **) * 3);
	if (tokens == NULL)
	{
		fprintf(stderr,"Error: malloc failed");
		free(tokens);
		exit(EXIT_FAILURE);
	}
	token = strtok(input, " \n");
	while (token != NULL && i <= 1)
	{
		tokens[i] = token;
		token = strtok(NULL, " \n");
		if (i >= 1)
			break;
		i++;
	}
	tokens[i + 1] = NULL;
	return (tokens);
}
