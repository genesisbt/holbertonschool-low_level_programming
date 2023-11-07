#include <stdio.h>
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
dog_t d2

init_dog(d2, name, age, owner);
return (d2);
}
