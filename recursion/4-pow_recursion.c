#include "main.h"
#include <stdio.h>

/**
 * _pow_recurssions - Function name
 * @x: entry one
 * @y: entry two
 *
 * description: Recursion Excercises
 *
 * Return: Lenght
 */

int _pow_recursions(int x, int y)
{
if (y < 0)
	return (-1);
else if (y > 0)
	return (x * _pow_recursions(x, y - 1));
return (x);
}
