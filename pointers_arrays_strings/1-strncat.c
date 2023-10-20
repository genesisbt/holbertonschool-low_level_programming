#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * _strncat - excercise name
 * @src: entry one
 * @dest: entry two
 * @n: entry three
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strncat(char *dest, char *src, int n)
{
	int ldest = 0;
	int contador = 0;

	ldest = contar(dest);
	for (contador = 0 ; contador < n ; contador++)

	{
		dest[ldest + contador] = src[contador];
	}
return (dest);
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
