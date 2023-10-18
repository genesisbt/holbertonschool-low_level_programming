#include "main.h"
/**
 * print_rev - excercise name
 * @s: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 1)
	{
		_putchar(s[i]);
		i--;
	}
_putchar ('\n');
}
