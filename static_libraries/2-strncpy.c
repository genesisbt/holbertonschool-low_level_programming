#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * _strncpy - excercise name
 * @src: entry one
 * @dest: entry two
 * @n: entry three
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lsrc = 0;
	int contador = 0;

	lsrc = contar(src);
	for (contador = 0 ; contador < n ; contador++)
	{
		if (contador <= lsrc)
			dest[contador] = src[contador];
		if (contador > lsrc)
			dest[contador] = '\0';
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
