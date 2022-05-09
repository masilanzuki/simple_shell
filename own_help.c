#include "shell.h"

/**
 * own_help - print help
 *
 * @args: command line
 * Return: int
 */

int own_help(char **args)
{
	char *builtin_funct_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};

	int i = 0;
	(void)(**args);
	printf("\n---help own_simple_shell--\n");
	printf("Type the commands and the arguments, push enter ");
	for (; i < numb_builtins(); i++)
	{
		printf("-> %s\n", builtin_funct_list[i]);
	}
	printf("the purporse the man is find information in other programs");
	return (-1);
}
