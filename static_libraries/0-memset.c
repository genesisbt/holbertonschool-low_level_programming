#include "main.h"
/**
 * _memset - excercise name
 * @s: entry one
 * @b: entry two
 * @n: entry three
 * Description: pointers arrays strings
 *
 * Return: lenght of string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int c = 0;

for (c = 0 ; c < n ; c++)
	s[c] = b;
return (s);
}
