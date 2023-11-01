#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Name of the script
 * @size: entry one
 * @c: entry two
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

char *create_array(unsigned int size, char c)
{
char *string = malloc(sizeof(char) * (size + 1));
int counter;

if (size == 0)
	return (NULL);
else
{
	for (counter = 0 ; counter < size ; counter++)
	{
		string[counter] = c;
	}
	string[counter] = '\0';
	return (string);
}
}

