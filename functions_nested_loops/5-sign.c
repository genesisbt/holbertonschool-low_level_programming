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
			_putchar ('0');
		}
		return (result);
}
