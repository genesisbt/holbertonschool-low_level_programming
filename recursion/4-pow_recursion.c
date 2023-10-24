#include "main.h"
#include <stdio.h>

/**
 * _pow_recurssion - Function name
 * @x: entry one
 * @y: entry two
 *
 * description: Recursion Excercises
 *
 * Return: Lenght
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y > 0)
	return (x * _pow_recursion(x, y - 1));
return (x);
}
