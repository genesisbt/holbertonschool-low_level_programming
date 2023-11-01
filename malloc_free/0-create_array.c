#include "main.h"
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
char *string;
unsigned int counter;

string = malloc(size * sizeof(char));
if (size == 0 || string == NULL)
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
