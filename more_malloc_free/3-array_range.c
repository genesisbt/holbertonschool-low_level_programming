#include "main.h"
#include <stdlib.h>

/**
 * array_range - Name of the script
 * @min: entry one
 * @max: entry two
 *
 * Description: description of the file
 *
 * Return: char pointer
 */

int *array_range(int min, int max);
{
	int c = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
for (c = 0 ; c + min <= max ; c++)
	{
	ptr[c] = min + c;
	}
return (ptr);
}
