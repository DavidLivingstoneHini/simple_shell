#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <signal.h>
#include <limits.h>

extern char **environ;

/**
 * struct builtins - builtin command for shell
 * @cmd: cmd
 * @p_f: pointer to builtin func
 *
 *
 *Description: struct for builtin func and command
 */

typedef struct builtins
{
	char *cmd;
	int (*p_f)(char **as, char **e);
} _built;

/**
 * struct builtInCommands - commands and functions associated with it
 * @command: input command
 * @func: output function
 */
typedef struct builtInCommands
{
	char *command;
	int (*func)(config *build);
} type_b;

/* built_ins */
_Bool findBuiltIns(config *build);
int exitFunc(config *build);
int historyFunc(config *build);
int aliasFunc(config *build);

/* check_path */
_Bool checkPath(config *);
_Bool checkEdgeCases(config *build);

/* _getenv */
char *_getenv(char *input, char **environ);
int exit_s(char **as, char **e);
int print_env(char **as, char **e);
int _strcmp(char *s1, char *s2);

#endif
