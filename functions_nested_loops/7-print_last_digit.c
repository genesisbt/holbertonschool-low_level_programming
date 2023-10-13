#include "main.h"
/**
 * print_last_digit - excercise
 * @n: char
 *
 * Description: Absolute Value
 *
 * Return: does not return nothing at all
 */

int print_last_digit(int n)
	{	if (n < 0)
		n = n * -1;
		n = n % 10;
		_putchar (n + '0');
		return (n + '0');
	}
