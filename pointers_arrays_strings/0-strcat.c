#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * _strcat - excercise name
 * @src: entry one
 * @dest: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strcat(char *dest, char *src)
{
	int lsrc = 0;
	int ldest = 0;
	int contador = 0;

	lsrc = contar(src);
	ldest = contar(dest);
	for (contador = 0 ; contador < lsrc ; contador++)
	{
		dest[ldest + contador] = src[contador];
	}
	dest[ldest + contador] = '\0';
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
