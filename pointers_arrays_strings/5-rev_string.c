#include "main.h"
/**
 * rev_string - excercise name
 * @s: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void rev_string(char *s)
{	int j = 0;
	int largo = 0;
	char c;

	while (s[largo] != '\0')
	{
		largo++;
	}
	largo--;
	char invertido[largo];

	while (largo >= 0)
	{
		char invertido[j] = s[i];

		largo--;
		j++;
	}
	for (j = 0; j <= largo; j++)
	{
		s[j] = invertido[j];
	}
_putchar ('\n');
}
