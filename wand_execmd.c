#include "och_wand.h"

/**
 * wand_execmd- executes command inputed by the user
 *
 * @args: pointer to a command of type char.
 */
void wand_execmd(char **args)
{
	char *format = NULL;

	if (args)
	{
		format = args[0];
		if (execve(format, args, NULL) == -1)
		{
			perror("Failure executing command:");
		}
	}
}
