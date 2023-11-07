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
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
