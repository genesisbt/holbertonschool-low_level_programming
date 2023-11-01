#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Name of the script
 * @str: entry one
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

char *_strdup(char *str)
{
int c1 = 0, c2;
char *copy;

if (str == NULL)
	return (NULL);
else
	{
	while (str[c1] != '\0')
		{
		c1++;
		}

	copy = malloc(sizeof(char) * (c1 + 1));

	for (c2 = 0 ; c2 < c1 ; c2++)
		{
		copy[c2] = str[c2];
		}
	copy[c2] = '\0';
	return (copy);
	}
}
