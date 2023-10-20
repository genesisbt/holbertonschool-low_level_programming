#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * _strcmp - excercise name
 * @s1: entry one
 * @s2: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

int _strcmp(char *s1, char *s2)
{
	int ls1 = 0;
	int ls2 = 0;
	int contador = 0;

	ls1 = contar(s1);
	ls2 = contar(s2);
	while (ls1 == ls2 && contador <= ls1)
	{
		if (s1[contador] != s2[contador])
		return (13);
		contador++;
	}
return (0);
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
