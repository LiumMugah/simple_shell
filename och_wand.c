#include "och_wand.h"

/**
 * main- runs the program.
 * Return: 0 when successful.
 */
int main(void)
{
	char *command = NULL;

	wand_prompt();
	wand_execmd(command);
	
	return (0);
}
