#include "main.h"
/**
 * rev_string - excercise name
 * @s: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	i--;
	for (i = 0 ; i < j / 2; i++)
	{
	temp = s[i];
	s[i] = s[j - i - 1];
	s[j - i - 1] = temp;
	}
_putchar ('\n');
}
