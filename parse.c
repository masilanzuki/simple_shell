#include "shell.h"

/**
 * tokenizer - divide the command
 *
 * @cmd: command line
 * str: command line
 * Return: tokens
 */

char **tokenizer(char *cmd)
{
	char **tokens;
	int bufersize = 100;
	char *token;
	int i = 0;

	tokens = malloc(sizeof(char *) * bufersize);

	if (!tokens)
	{
		fprintf(stderr, "Allocation error in Tokenizer");
		exit(EXIT_FAILURE);
	}

	token = strtok(cmd, DELIMIT);
	while (token)
	{
		tokens[i] = token;
		i++;
		if (i >= bufersize)
		{
			bufersize += bufersize;
			tokens = realloc(tokens, bufersize * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "Reallocation error in parse: tokens");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, DELIMIT);
	}
	tokens[i] = NULL;
	return (tokens);
}
