#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
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
	d2->name = name;
	d2->age = age;
	d2->owner = owner;
	return (d2);
}
else
return (NULL);
}
