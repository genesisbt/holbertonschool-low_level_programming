#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - name
 * @d: first field
 *
 * Description: initialize a variable of type struct dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
		}
}
