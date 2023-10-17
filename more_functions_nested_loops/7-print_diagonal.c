#include "main.h"
/**
 * print_diagonal - excercise five variables
 * @n: first input
 *
 * Description: one to ten
 *
 * Return: does not return nothing at all
 */

void print_diagonal(int n)
{
int a;
int b;

for (a = 0; a < n; a++)
	{
	for (b = 0; b <= a; b++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
