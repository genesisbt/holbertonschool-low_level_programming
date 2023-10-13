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
	{	int m;
		
		n = n % 10;
		m = n + '0';
		_putchar (n);
		return (n);
	}
