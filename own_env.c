#include "shell.h"

/**
 * own_env - program owner
 *
 * @args: command line
 * Return: 1 sucessed, 0 otherwise
 */

int own_env(char **args)
{
	int i = 0;
	(void)(**args);

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (-1);
}
