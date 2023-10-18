#include "main.h"
#include <stdio.h>

/**
 * print_array - excercise name
 * @n: entry one
 * @a: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

void print_array(int *a, int n)
{
	int contador;

	for (contador = 0 ; contador < n; contador++)
	{
	printf ("%d, ", a[contador]);
	}
}
