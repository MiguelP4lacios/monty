#include "monty.h"
/**
 *check_mode - check the behavoir of the list: queue or stack
 *@op: s is for save the new mode, c is for check the current mode
 *Return: 0 in case the list mode is stack, -1 in queue case
 *
 */

int check_mode(char op)
{
	static char mode[5];

	if (op == 's')
	{
		mode[0] = global.line[0][0];
		mode[1] = global.line[0][1];
		mode[2] = global.line[0][2];
		mode[3] = global.line[0][3];
		mode[4] = global.line[0][4];
		return (0);
	}
	if (op == 'c')
	{
		if (mode != '\0')
			if (strcmp("stack", mode) == 0)
				return (0);
			else
				return (-1)
		else
			return (0);
	}
	return (-1);
}
