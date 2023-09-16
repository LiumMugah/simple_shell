#include "och_wand.h"

/**
 * wand_propmt - displays the prompt for user to input.
 *
 * Return: 0 always.
 */
int wand_prompt(void)
{
	char *format = "($) ";
	char *commandline;
	size_t size = 0;
	ssize_t char_typed;

	printf("%s", format);
	char_typed = getline(&commandline, &size, stdin);

	if (char_typed == -1)
	{
		printf("Exit \n");
		return (-1);
	}

	printf("%s\n", commandline);

	free(commandline);
	
	return (0);
}
