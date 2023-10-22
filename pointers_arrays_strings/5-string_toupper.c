#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * string_toupper - excercise name
 * @str: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

int string_toupper(char *str)
{
	int lstr = 0;
	int contador = 0;

	lstr = contar(str);
	while (contador <= lstr)
	{
	if (str[contador] >= 'a' && str[contador] <= 'z')
		str[contador] - 32;
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
