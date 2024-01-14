#include "search_algos.h"

/**
 * linear_search - searches for a number in an array using linear search
 * @array: array of numbers to search in
 * @size: size of the array
 * @value: value of the int to search
 * Return: the first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t s;
	int c = 0;

	if (array == NULL)
		return (-1);

	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%i] = [%i]\n", c, array[c]);

		if (array[c] == value)
			return (c);

		c++;
	}

	return (-1);
}
