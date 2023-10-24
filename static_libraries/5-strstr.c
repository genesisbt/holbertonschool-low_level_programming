#include "main.h"
#include <stdio.h>
unsigned int contar(char *cadena);

/**
 * _strstr - excercise name
 * @haystack: entry one
 * @needle: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int needleln = 0;
	int contador = 0;
	int contador2 = 0;
	unsigned int coincidencia = 0;

	needleln = contar(needle);
	for (contador = 0 ; haystack[contador] != '\0' ; contador++)
	{
		if (haystack[contador] == needle[0])
		{
			for (contador2 = 0 ; haystack[contador + contador2] == needle[contador2]
			; contador2++)
			{
				coincidencia++;
				if (coincidencia == needleln)
					return (&(haystack[contador]));
			}
		}
	}
	if (needle[0] == '\0')
		return (haystack);
return (NULL);
}

/**
 * contar - excercise name
 * @cadena: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

unsigned int contar(char *cadena)
{
	unsigned int length = 0;

	while (cadena[length] != '\0')
	{
		length++;
	}
	return (length);
}
