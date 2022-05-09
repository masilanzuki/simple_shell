#include "shell.h"

/**
 * init_shell - the welcome in the shell
 */

void init_shell(void)
{
	char *username = getenv("USER");

	clear();
	printf("\n\n\n\n*****************");
	printf("\n\n\t***Own Shell***");
	printf("\n\tUser is: @%s", username);
	printf("\n\n\n\n*****************");
	printf("\n");
	sleep(1);
}
