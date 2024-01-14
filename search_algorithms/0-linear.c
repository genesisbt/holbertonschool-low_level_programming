#include "search_algos.h"
/**
* linear_search - searchs a number in an array
* @array: array of numbers to search in
* @size: size of the array
* @value: value of the int to search

* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
    int c;

    if (array == NULL)
        return (-1);
    for (c = 0 ; count1 < size - 1 ; c++)
    {
        if (array[c] == value)
        return (c);
    }    
    return(-1);
    }
