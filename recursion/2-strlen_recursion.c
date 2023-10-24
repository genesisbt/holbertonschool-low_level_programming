#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function name
 * @s: entry one
 *
 * description: Recursion Excercises
 *
 * Return: Lenght
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

if (*s != '\0')
	{
	counter = 1 + _strlen_recursion(s + 1);
	}
return (counter);
}
