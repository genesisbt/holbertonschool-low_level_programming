#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Name of the script
 * @s1: entry one
 * @s2: entry two
 * @n: entry three
 *
 * Description: description of the file
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int c1 = 0, c2 = 0, c3 = 0;
char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
		c2++;

	result = malloc(sizeof(char) * (c1 + c2 + 1));

	if (result == NULL)
		return (NULL);
	if (n >= c2)
		n = c2;
	for (c3 = 0 ; c3 < c1 + n ; c3++)
		{
		if (c3 < c1)
			result[c3] = s1[c3];
		if (c3 >= c1)
			result[c3] = s2[c3 - c1];
		}
	result[c3] = '\0';
	return (result);
}
