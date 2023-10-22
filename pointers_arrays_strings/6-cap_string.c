#include "main.h"
#include <stdio.h>
int contar(char *cadena);
/**
 * cap_string - excercise name
 * @str: entry one
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */
char *cap_string(char *str)
{
	int lstr = 0;
	int contador = 0;
	int capitalize = 0;

	lstr = contar(str);
	while (contador <= lstr)
	{
	if (str[contador] >= 'a' && str[contador] <= 'z' && capitalize == '0')
	{
		str[contador] -= 32;
		capitalize = 1;
	}
	if (str[contador] < 'a' || str[contador] > 'z')
		capitalize = 0;
	}
	contador++;
return (str);
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
