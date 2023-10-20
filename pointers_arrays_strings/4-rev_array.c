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
	int tmp = 0;
	int contador = 0;

	for (contador = 0 ; contador < n ; contador++)
	{
		tmp = a[contador];
	a[contador] = a[n - 1 - contador];
	a[n - 1 - contador] = tmp;
	}
}
