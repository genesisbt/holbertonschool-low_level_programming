#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Function name
 * @s: entry one
 *
 * description: Recursion Excercises
 *
 * return: something
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
else
	_putchar('\n');
}
