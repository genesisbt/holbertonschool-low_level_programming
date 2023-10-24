#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function name
 * @s: entry one
 *
 * description: Recursion Excercises
 *
 * return: something
 */

int _strlen_recursion(char *s)
{
	int counter = 1;

if (*s != '\0')
	{
	counter += _strlen_recursion(s + 1);
	}
return (counter);
}
