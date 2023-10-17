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
	for (b = 1; b <= a; b++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	if (a > 0)
		_putchar('\n');
	}
if (a <= 0)
	_putchar('\n');
}
