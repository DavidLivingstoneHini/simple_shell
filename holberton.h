#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>

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

#endif
