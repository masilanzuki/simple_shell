#include "shell.h"

/**
 * own_exit - kill all process the shell
 *
 * @args: command line args
 * Return: int
 */

int own_exit(char **args)
{
	if (args[1])
	{
		return (atoi(args[1]));
	}
	else
	{
		return (0);
	}
}
