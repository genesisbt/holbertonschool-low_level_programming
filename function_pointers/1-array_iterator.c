#include<stdio.h>
#include"function_pointers.h"

/**
 * array_iterator - Function name
 * @array: first input
 * @size: second input
 * @action: third input
 *
 * Description: prints a name
 *
 * Return: something
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (action != NULL)
{
	for (a = 0 ; a < size ; a++)
	{
		action(array[a]);
	}
}
}
