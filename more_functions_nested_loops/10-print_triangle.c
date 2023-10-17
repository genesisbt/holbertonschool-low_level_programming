#include "main.h"
/**
 * print_triangle - excercise five variables
 * @size: first input
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

void print_triangle(int size)
{
int a;
int b;

for (a = 1 ; a <= size ; a++)
	{
		for (b = size - a; b > ; b++)
		{
			_putchar(' ');
		}
		for (b = 0; b < a ; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
if (a <= 0)
	_putchar('\n');
}
