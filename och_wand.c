#include "och_wand.h"

/**
 * main- runs the program.
 * Return: 0 when successful.
 */
int main()
{
	char *command;
	struct command *line;

	while (true)
	{
		wand_prompt();

		command = wand_prompt();
		if (command == NULL)
		{
			break;
		}

		line = get_path(command);
		if (line == NULL)
		{
			free(command);
			continue;
		}

		wand_execute(line);
	}
		return (0);
}
