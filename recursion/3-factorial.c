#include "main.h"
#include <stdio.h>

/**
 * factorial - Function name
 * @n: entry one
 *
 * description: Recursion Excercises
 *
 * Return: Lenght
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));
}
