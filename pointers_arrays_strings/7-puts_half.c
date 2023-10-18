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
	int half_lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if (lenght % 2 != 0)
		half_lenght = (lenght -1 /2);
	else
		half_lenght = (lenght / 2);
	for (counter = 0 ; counter < half_lenght ; counter++)
	{
		_putchar(str[counter + half_lenght]);
	}
	_putchar ('\n');
}
