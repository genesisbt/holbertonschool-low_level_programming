#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - name
 * @name: first field
 * @age: third
 * @owner: fourth
 *
 * Description: initialize a variable of type struct dog
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d2 = malloc(sizeof(dog_t));

if (d2 != NULL)
{
	d2->name = malloc(strlen(name) + 1);
	d2->owner = malloc(strlen(owner) + 1);

	if (d2->name == NULL || d2->owner == NULL)
	{
		free(d2->name);
		free(d2->owner);
		free(d2);
	}
	else
	{
	strcpy(d2->name, name);
	strcpy(d2->owner, owner);
	d2->age = age;
	return (d2);
	}
}
else
{
	free(d2);
	return (NULL);
}
}
