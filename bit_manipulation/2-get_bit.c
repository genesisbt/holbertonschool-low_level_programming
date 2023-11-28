#include "main.h"

/**
 * get_bit - value of index
 * @n: entry one
 * @index: entry two
 * Description: something
 * Return: something
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8) /* Check if index is valid */
	return (-1);
return ((n >> index) & 1);
}
