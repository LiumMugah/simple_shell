#include "och_wand.h"

/**
 * wand_execmd- executes command inputed by the user
 *
 * @args: pointer to a command of type char.
 */
void wand_execute(struct command *format)
{
	char *args[ARGS_SIZE + 1];
	int i;
	pid_t child_pid = fork();
	if (child_pid == -1)
	{
		perror("fork");
		exit(1);
	}
	else if (child_pid == 0)
	{
		for (i = 0; i < ARGS_SIZE; i++) 
		{
			args[i] = format->args[i];
		}
		args[ARGS_SIZE] = NULL;
		execve(format->cmd, args, NULL);
	}
	wait(NULL);
}

