#include "main.h"
#include <stdio.h>
unsigned int contar(char *cadena);

/**
 * _strpbrk - excercise name
 * @s: entry one
 * @accept: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int acceptln = 0;
	int contador = 0;
	int contador2 = 0;
	unsigned int coincidencia = 0;

	acceptln = contar(accept);
	for (contador = 0 ; s[contador] != '\0' ; contador++)
	{
		if (s[contador] == accept[0])
		{
			for (contador2 = 0 ; s[contador + contador2] == accept[contador2]
			; contador2++)
			{
				coincidencia++;
				if (coincidencia == acceptln)
					return (&(s[contador]));
			}
		}
	}
	if (coincidencia == 0)
		return (&(s[1]));
return (NULL);
}

unsigned int contar(char *cadena)
{
	unsigned int length = 0;

	while (cadena[length] != '\0')
	{
		length++;
	}
	return (length);
}
