#include "holberton.h"

/**
* main - Entry point
* @ac: number of arguments of av
* @av: array of arguments
* @e: str
* Return: always 0
**/
int main(int ac, char *av[], char **e)
{
char *p = NULL;
char **str = NULL;
int stat;
pid_t ppid;
(void)ac;

while (1)
{
p = NULL;
signal(SIGINT, sig_hand);
if (prompt(&p) == -1)
continue;
str = str_tow(p);
if (!str)
{
free_as(99, 1, p);
continue;
}
free_as(99, 1, p);
if (built_check(str, e))
continue;
ppid = fork();
if (ppid == 0)
{
_path(str, e);
if (execve(str[0], str, NULL) == -1)
{
perror(*av);
free_a(str);
exit(0);
}
}
else
{
free_a(str);
if (!wait(&stat))
break;
}
}
return (0);
}
