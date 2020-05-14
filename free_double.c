#include "monty.h"
/**
 *free_double - free memory
 *@d: is a string
 */
void free_double(char **d)
{
	size_t i = 0;

	if (d != '\0')
	{
		while (d[i])
		{
			free(d[i]);
			i++;
		}
	}
	free(d);
}
