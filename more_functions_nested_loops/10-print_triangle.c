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
int c;

for (a = 1 ; a <= size + 1 ; a++)
	{
		for (c = 1 ; c <= size - a ; c++)
		{
			_putchar(' ');
		}
		for (b = a -1; b > 0 ; b--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
if (a <= 0)
	_putchar('\n');
}
