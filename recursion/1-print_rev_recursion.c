#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Function name
 * @s: entry one
 *
 * description: Recursion Excercises
 *
 * return: something
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
