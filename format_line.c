#include "monty.h"
/**
 *format_line - prepare the monty instructions for execution
 *@input: raw monty instruction
 *Return: instructions formated or null in failure
*/
char **format_line(char *input)
{
	char **tokens = NULL;
	char *token = NULL;
	size_t i = 0;

	if (input == '\0')
		return ('\0');
	if (input[0] == '\0' || input[1] == '\0')
		return ('\0');
	delete_newline(&input);
	if (empty_codes(&input) == 1)
		return ('\0');
	tokens = malloc(sizeof(char **) * 3);
	if (tokens == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		release(NULL, NULL, 'r');
		free(tokens);
		exit(EXIT_FAILURE);
	}
	tokens[0] = NULL, tokens[1] = NULL, tokens[2] = NULL;
	token = strtok(input, " ");
	while (token != NULL && i <= 1)
	{
		tokens[i] = token;
		token = strtok(NULL, " ");
		if (i >= 1)
			break;
		i++;
	}
	tokens[i + 1] = NULL;
	return (tokens);
}
