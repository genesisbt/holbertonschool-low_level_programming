#include "main.h"
/**
 * times_table - excercise
 *
 * Description: Absolute Value
 *
 * Return: does not return nothing at all
 */

int times_table(void)
{
	int num1;
	int num2;
	int resultado;
	int d1;
	int espacio2;

for (num1 = 0 ; num1 < 10 ; num1++)
{
	for (num2 = 0; num2 < 10; num2++)
	{
		resultado = num1 * num2;
		if (resultado > 10)
		{
			d1 = resultado / 10;
			_putchar(d1 + '0');
		}
		if (num1 * (num2 + 1) > 10)
			espacio2 = 1;
	_putchar((resultado % 10) + '0');
		if (num2 != 9)
		{
			_putchar(',');
			if (espacio2 == 0)
				_putchar(' ');
			_putchar(' ');
		}
		espacio2 = 0;
	}
_putchar ('\n');
}
return (0);
}
