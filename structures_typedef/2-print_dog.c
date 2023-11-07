#include <stdio.h>
#include "dog.h"
/**
 * print_dog - name
 * @d: first field
 *
 * Description: initialize a variable of type struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
	}
}
