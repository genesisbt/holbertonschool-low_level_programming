#include "main.h"
#include <stdio.h>
int _sqrt_finder(int n, int l);
/**
 * _sqrt_recursion - Function name
 * @n: entry one
 *
 * description: Recursion Excercises
 *
 * Return: root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else if (n == 0 || n == 1)
	return (n);
else
	return (_sqrt_finder(n, 1));
}

/**
 * _sqrt_finder - Function name
 * @n: entry one
 * @l: entry two
 *
 * description: Recursion Excercises
 *
 * Return: finds root
 */
int _sqrt_finder(int n, int l)
{
if (l * l == n)
	return (l);
if (l * l > n)
	return (-1);
else
	return (_sqrt_finder(n, l + 1));
}
