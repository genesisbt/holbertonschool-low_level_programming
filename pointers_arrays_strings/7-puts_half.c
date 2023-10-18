#include "main.h"
/**
 * puts_half - excercise name
 * @str: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void puts_half(char *str)
{
	int lenght = 0;
	int counter = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	lenght--;
	if (lenght % 2 != 0)
		lenght--;
	for (counter = 0 ; counter <= lenght / 2 ; counter++)
	{
		_putchar(str[counter + lenght / 2 + 1]);
	}
	_putchar ('\n');
}
