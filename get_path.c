# include "och_wand.h"

/**
 * get_path - finds the path for the command to excecute 
 * @command: the commant typed by the user.
 *
 * Return: returns the command if found.
 */
struct command *get_path(char *line)
{
	char *linetok[ARGS_SIZE];
	int num_tokens = 0;
	int i;
	char *tokens = strtok(line, " ");
	struct command *command = malloc(sizeof(struct command));
	if (command == NULL)
	{
		return NULL;
	}

	/* separate the line into tokens */
	while (tokens != NULL)
	{
		linetok[num_tokens] = tokens;
		num_tokens++;
		tokens = strtok(NULL, " ");
	}

	/* Commands and the arguments*/
	command->cmd = linetok[0];
	command->args = malloc(sizeof(char *) * (num_tokens + 1));
	if (command->args == NULL)
	{
		free(command);
		return NULL;
	}

	for(i = 0; i < num_tokens; i++)
	{
		command->args[i] = linetok[i];
	}
	
	command->args[num_tokens] = NULL;
	return command;
}

