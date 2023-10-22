#include "main.h"
#include <stdio.h>
/**
 * reverse_array - excercise name
 * @a: entry one
 * @n: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int contador = 0;
	int mitad = 0;

	if (n % 2 == 0)
		mitad = n / 2;
	else
		mitad = (n - 1) / 2;

	for (contador = 0 ; contador < mitad ; contador++)
	{
		tmp = a[contador];
		a[contador] = a[n - 1 - contador];
		a[n - 1 - contador] = tmp;
	}
}
