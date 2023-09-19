#ifndef OCH_WAND
#define OCH_WAND

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

#define LINE_SIZE 1024
#define ARGS_SIZE 10

/* A structure to store commands and its arguments */
struct command {
	char *cmd;
	char ** args;
};

char *wand_prompt ();
struct command *get_path(char *line);
void wand_execute(struct command *format);

#endif
