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
char *leet(char *str)
{
	char letras[] = "aAeEoOtTlL";
	char numeros[] = "4433007711";
	int contador;
	int contador2;

	for (contador = 0 ; str[contador] != '\0' ; contador++)
	{
		for (contador2 = 0 ; letras[contador2] != '\0' ; contador2++)
		{
			if (str[contador] == letras[contador2])
				str[contador] = numeros[contador2];
		}
	}
return (str);
}
