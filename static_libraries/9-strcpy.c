#include "main.h"
#include <stdio.h>

/**
 * _strcpy - excercise name
 * @src: entry one
 * @dest: entry two
 *
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (src[length] != '\0')
	{
	dest[length] = src[length];
	length++;
	}
	dest[length] = '\0';
return (dest);
}

