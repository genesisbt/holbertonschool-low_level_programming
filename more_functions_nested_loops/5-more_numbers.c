#include "main.h"
/**
 * more_numbers - excercise five variables
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

void more_numbers(void)
{
int a = 0;
int b = 0;

for (b = 0; b < 10; b++)
	{
	for (a = 0; a < 14; a++)
		{
		if (a > 9)
			{
			_putchar(a / 10 + '0');
			}
		_putchar(a % 10 + '0');
		}
	_putchar('\n');
	}
}
