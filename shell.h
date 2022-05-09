#ifndef SHELL_H
#define SHELL_H
#define MAXCOM 1000 /*max number of letters to be supported*/
#define MAXLIST 100 /*max number of commands to be supported*/
#define clear() printf("\033[H\033[J")

/*Macro delimiter*/
#define DELIMIT " \"\t\n\a"
extern char **environ;

/* Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>

void init_shell(void);
void mode_interactive(void);
void mode_non_interactive(void);
char **tokenizer(char *str);

int new_process(char **args);
int numb_builtins(void);
int execute_tokens(char **args);
int own_cd(char **args);
int own_env(char **args);
int own_help(char **args);
int own_exit(char **args);
char *read_cmd(void);
char *read_stream(void);

/* variables global */
char **args;

#endif /* SHELL_H */
