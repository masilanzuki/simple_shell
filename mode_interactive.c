#include "shell.h"

/**
 * mode_interactive - input command line and read
 *
 */

void mode_interactive(void)
{
	char *cmd;
	int status = -1;

	init_shell();

	/* Loop infinite */
	do {
		printf("cisfun$ "); /*imprimimos el indicador del shell*/
		cmd = read_cmd(); /*read a command*/
		args = tokenizer(cmd);/*tokenizer command*/
		status = execute_tokens(args);

		/*avoid memory leaks*/
		free(cmd);
		free(args);

		/*exit status*/
		if (status >= 0)
		{
			exit(status);
		}

	} while (status == -1);
	/*end loop*/
}
