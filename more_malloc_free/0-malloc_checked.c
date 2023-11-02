#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Name of the script
 * @b: entry one
 *
 * Description: Prints the first argument of the command line in the terminal
 *
 * Return: is void
 */

void *malloc_checked(unsigned int b)
{
void *pointer = malloc(b);
if (pointer == NULL)
	exit(98);
else
	return (pointer);
}
