#include "shell.h"

/**
 * numb_builtins - the list of functions
 *
 * Return: number of builtin
 */

int numb_builtins(void)
{
	char *builtin_funct_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	return (sizeof(builtin_funct_list) / (sizeof(char *)));
}

/**
 * execute_tokens - select the program
 *
 * @args: give the command line
 * Return: int
 */

int execute_tokens(char **args)
{
	char *builtin_funct_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};

	int (*builtin_func[])(char **) = {
		&own_cd,
		&own_env,
		&own_help,
		&own_exit
	};

	int i = 0;

	if (args[0] == NULL)
	{
		return (-1);
	}

	for (; i < numb_builtins(); i++)
	{
		if (strcmp(args[0], builtin_funct_list[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (new_process(args));
}
