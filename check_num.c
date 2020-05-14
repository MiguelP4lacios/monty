#include "monty.h"
/**
 *check_num - check if the string is a number
 *@number: string
 *Return: 1 if its a number, -1 if its dont
 */
int check_num(char *number)
{
	int i = 0;

	if (number[0] == '-')
		i++;
	while (number[i] != '\0')
	{
		if (number[i] < 48 || number[i] > 57)
			return (-1);
		i++;
	}
	return (1);
}
