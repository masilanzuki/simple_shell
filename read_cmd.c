#include "shell.h"

/**
 * read_cmd - read the string input
 *
 * Return: char*
 */

char *read_cmd(void)
{
	char *string;
	size_t size = 10;

	char **stringptr;

	stringptr = &string;
	string = (char *)malloc(size);

	if (getline(stringptr, &size, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(string);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(string);
			perror("error in read_line: getline");
			exit(EXIT_FAILURE);
		}
	}
	return (string);
}
