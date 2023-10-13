#include "main.h"
/**
 * add - excercise ten
 * @a: int
 * @b: int
 *
 * Description: functions nested loops
 *
 * Return: does not return nothing at all
 */

int add(int n)
{
if (n == 98)
	_putchar(n + '0');
if (n < 98)
{
	for (n ; n <= 98 ; n++)
	{
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
if (n > 98)
{	for (n ; n >= 98 ; n--)
	{
		_putchar(n + '0');
		if (n != 98) 
		{
			_putchar (',');
			_putchar (' ');
		}
	}
}	
return (a + b);
}
