#include "monty.h"
/**
 *delete_newline - delete new lines into a string
 *@delete: string to delete new lines
 */
void delete_newline(char **delete)
{
	int i = 0;
	char *string = *delete;

	while (string[i] != '\0')
	{
		if (string[i] == '\n')
			string[i] = '\0';
		i++;
	}
}
