#include "main.h"
#include <stdio.h>

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
	int firstnumber = n;
if (n < 0)
	return (-1);
else if (n == 0 || n == 1)
	return (n);
else
	return (_sqrt_finder(n, 1));
}

int _sqrt_finder(int n, int l)
{
if (n * n == l)
	return (n);
if (n * n > l)
	return (-1);
else
	return (_sqrt_finder(n, n + 1));
}
