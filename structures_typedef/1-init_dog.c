#include <stdio.h>
#include "dog.h"
/**
 * init_dog - name
 * @d: first field
 * @name: second field
 * @age: third
 * @owner: fourth
 *
 * Description: initialize a variable of type struct dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
	else
		return (NULL);
}
