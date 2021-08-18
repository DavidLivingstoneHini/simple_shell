#include "holberton.h"

/**
* print_env - print environment variables
* @as: array of arguments
* @e: array of environment variables
* Return: 1
*/

int print_env(char **as, char **e)
{
int i, length;

i = 0;
while (e[i] != NULL)
{
length = _strlen(e[i]);
write(STDOUT_FILENO, e[i], length);
write(STDOUT_FILENO, "\n", 1);
i++;
}
free_a(as);
return (1);
}
