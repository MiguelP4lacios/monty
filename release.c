#include "monty.h"
/**
 *release - release the memory
 *@in_stream: FILE streaming
 *@monty_codes: raw instructions
 *@op: define the action for the function
 */
void release(FILE **in_stream, char **monty_codes, char op)
{
	static FILE *save_stream;
	static char *save_monty;

	if (op == 's')
	{
		save_stream = *in_stream;
		save_monty = *monty_codes;
	}
	else if (op == 'r')
	{
		free(save_monty);
		fclose(save_stream);
	}

}
