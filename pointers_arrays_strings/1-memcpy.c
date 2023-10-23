#include "main.h"
int contar(char *cadena);
/**
 * _memcpy - excercise name
 * @src: entry one
 * @dest: entry two
 * @n: entry three
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int contador = 0;

	for (contador = 0 ; contador < n ; contador++)
	{
		dest[contador] = src[contador];
	}
return (dest);
}
