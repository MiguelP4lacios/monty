#include "monty.h"
/**
 *empty_codes - check if you get an empty string
 *@string: string
 *Return: 1 if the string if empty, -1 if don't
 */
int empty_codes(char **string)
{
	int i = 0;

	while (string[0][i] != '\0')
	{
		if (string[0][i] != ' ')
			return (-1);
		i++;
	}
	return (1);
}
