#nclude "main.h"
/**
 * _puts2 - excercise name
 * @str: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void _puts2(char *str)
i{
	int i = 0;

	while (str[i] != '\0')
	{
	if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
