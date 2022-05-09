#include "shell.h"

/**
 * main - the point for change the mode
 *
 * Return: int
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		mode_interactive();
	}
	else
	{
		mode_non_interactive();
	}

	return (0);
}
