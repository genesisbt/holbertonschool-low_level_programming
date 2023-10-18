#nclude "main.h"
/**
 * _puts - excercise name
 * @str: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
