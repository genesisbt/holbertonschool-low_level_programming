#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * _strspn - excercise name
 * @s: entry one
 * @accept: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

unsigned int _strspn(char *s, char *accept)
{
int contador = 0;
int contador2 = 0;
unsigned int iguales = 0;
unsigned int diferentes = 0;

	for (contador = 0 ; s[contador] != '\0' ; contador++)
	{
		for (contador2 = 0 ; accept[contador2] != '\0' ; contador2++)
		{
			diferentes = iguales;
			if (s[contador] == accept[contador2])
				{
				iguales++;
				}
		}
		if (diferentes == iguales)
			return (iguales++);
	}
return (iguales++);
}
