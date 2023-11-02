#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Name of the script
 * @size: entry one
 * @nmemb: entry two
 *
 * Description: description of the file
 *
 * Return: char pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c = 0;
	char *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	for (c = 0 ; c < nmemb * size ; c++)
	{
		ptr[c] = 0;
	}
	return (ptr);
}
