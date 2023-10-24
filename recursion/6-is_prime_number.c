#include "main.h"
#include <stdio.h>
int _prime_finder(int n, int l);
/**
 * is_prime_number - Function name
 * @n: entry one
 *
 * description: Recursion Excercises
 *
 * Return: root
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);

else
	return (_prime_finder(n, n - 1));
}

/**
 * _prime_finder - Function name
 * @n: entry one
 * @l: entry two
 *
 * description: Recursion Excercises
 *
 * Return: finds root
 */
int _prime_finder(int n, int l)
{
if (l < 2)
	return (0);
if (n % 1 == 0)
	return (1);
else
	return (_prime_finder(n, l - 1));
}
