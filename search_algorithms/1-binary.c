#include "search_algos.h"

/**
 * binary_search - searchs for a number in an array
 * by using the binary search algorithm
 * @array: array to search the value for
 * @low: where the search should start
 * @high: where the search shold end
 * @value: value to search for
 *
 * Return: position of value
 */
int recursive_binsearch(int *array, int low, int high, int value)
{
	int middle;
	middle = (high - low) / 2;

	if (array[middle] == value)
		return(middle);
	if (value < array[middle])
		recursive_binsearch(array, low, middle - 1, value);
	if (value > array[middle])
		recursive_binsearch(array, middle + 1, high, value);
	return(-1);
}

/**
 * binary_search - searchs for a number in an array
 * by using the binary search algorithm
 * @array: array to search the value for
 * @size: size of the array
 * @value: value to search for
 *
 * Return: position of the value found or -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return(-1);
	recursive_binsearch(array, 0, size -1, value);
	return(-1);
}
