# OWN SHLL
This manual is oriented towards understanding and using the functions contained in the Own shell project, through which a shell is implemented in the Linux operating system.
Here, the shell runs in a loop, which we know as a Read-Eval-Print-Loop or REPL. The shell reads the input, parses it, and executes it, then loops to read the next command, and so on until you enter a command such as exit, shutdown, or reboot.

The central part of any Linux shell is the command line interpreter which reads a
# NAME
own_cd, change the current directory

# SYNOPSIS
#include "shell.h"
int own_cd(char **args)

# DESCRIPTION
This function gets the arguments and changes the current directory

# OPTIONS
cd .. changes to the father directory
cd - when a “-” is used as operand, changes to the before working directory and writes it´s name

# EXAMPLES
cd user/Administrator/Documents/simple_shell
# EXIT VALUES
Returns 1, for success; 0 otherwise 
# SEE ALSO
https://man7.org/linux/man-pages