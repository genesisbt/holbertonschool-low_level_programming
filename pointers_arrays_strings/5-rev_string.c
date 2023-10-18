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
	char temp = s[i];

	s[i] = s[j - i - 1];
	s[j - i - 1] = temo;
	}
_putchar ('\n');
}
