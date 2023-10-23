#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - excercise name
 * @a: entry one
 * @size: entry two
 * Description: pointers arrays strings
 *
 * Return: something
 */

void print_diagsums(int *a, int size)
{
	int contador = 0;
	int d1 = 0, d2 = 0;

	for (contador = 0 ; contador < size ; contador++)
	{
		d1 += a[contador][contador];
		d2 += a[contador][contador - 1];
	}
	printf("%d, %d\n", d1, d2);
}
