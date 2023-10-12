#include "main.h"
/**
 * print_sign - excercise five
 * @n: char
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int print_sign(int n)
	{
		int result = 0;
		int printing = 0;

		if (n > 0)
		{
			result = 1;
			_putchar ('+');
		}
		if (n < 0)
		{
			result = -1;
			_putchar ('-');
		}
		if (n == 0)
		{
			result = 0;
			_putchar ('n');
		}
		_putchar (',');
		_putchar (' ');
		return (result);
}
