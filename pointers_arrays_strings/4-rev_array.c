#include "main.h"
#include <stdio.h>
int contar(char *cadena);
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
	int la = n;
	char *cp = a;
	int contador = 0;

	la = contar(a);
	for (contador = 0 ; contador < n && contador <= la ; contador++)
	{
	a[contador] = cp[n - 1 - contador];
	}
}

/**
 * contar - cuenta largoe
 * @cadena: puntero a array de char
 *
 * Description: cuego del string
 *
 * Return: lenght of string
 */

int contar(char *cadena)
{
	int length = 0;

	while (cadena[length] != '\0')
	{
		length++;
	}
	return (length);
}
