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

/* check_path */
_Bool checkPath(config *);
_Bool checkEdgeCases(config *build);

/* _getenv */
char *_getenv(char *input, char **environ);

#endif
