#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Name of the script
 * @s1: entry one
 * @s2: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

char *str_concat(char *s1, char *s2)
{
int c1 = 0, c2 = 0, c3 = 0;
char *result;

	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;

	result = malloc(sizeof(char) * (c1 + c2 + 1));

	if (result == NULL)
		return (NULL);

	for (c3 = 0 ; c3 < c1 + c2; c3++)
		{
		if (c3 < c1)
			result[c3] = s1[c3];
		if (c3 >= c1)
			result[c3] = s2[c3 - c1];
		}
	result[c3] = '\0';
	return (result);
}
