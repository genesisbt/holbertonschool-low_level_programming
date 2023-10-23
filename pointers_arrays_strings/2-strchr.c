#include "main.h"
int contar(char *cadena);
/**
 * _strchr - excercise name
 * @s: entry one
 * @c: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strchr(char *s, char c)
{
int contador = 0;

	for (contador = 0 ; s[contador] != '\0' ; contador++)
	{
		if (s[contador] == c)
			return (&(s[contador]));
	}
	if (s[contador] == '\0')
		return (NULL);
return (NULL);
}
