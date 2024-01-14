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
    size_t s;
    int c=;

    if (array == NULL)
        return (-1);
    for (s = 0 ; s < size - 1 ; s++)
    {
        if (array[c] == value)
        return (c);
    c++;
    }    
    return(-1);
    }
