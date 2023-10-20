#include "main.h"
#include <stdio.h>
/**
 * _reverse_array - excercise name
 * @a: entry one
 * @n: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void reverse_array(int *a, int n)
{
	int cp[n];
	int contador = 0;

	for (contador = 0 ; contador < n ; contador++)
	{
	a[contador] = cp[n - 1 - contador];
	}
}
