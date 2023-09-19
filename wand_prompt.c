#include "och_wand.h"

/**
 * wand_propmt - displays the prompt for user to input.
 *
 * Return: 0 always.
 */
char *wand_prompt()
{
	char *format = "($) ";
	char *commandline;
	size_t size = 0;
	ssize_t char_typed;

	printf("%s", format);
	char_typed = getline(&commandline, &size, stdin);

	if (char_typed == -1)
	{
		if(feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("not found \n");
			exit(EXIT_FAILURE);
		}
	}

	printf("%s\n", commandline);

	free(commandline);
	
	return commandline;
}
