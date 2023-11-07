#include<stdio.h>
#include"function_pointers.h"

/**
 * int_index - Function name
 * @array: first input
 * @size: second input
 * @cmp: third input
 *
 * Description: prints a name
 *
 * Return: something
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (size <= 0)
	return (-1);
else
{
	if (cmp != NULL && array != NULL)
	{
		for (a = 0 ; a < size ; a++)
		{
		if (cmp(array[a]) != 0)
			return (a);
		}
	}
	return (-1);
}
}
