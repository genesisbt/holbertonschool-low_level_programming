#include "main.h"

/**
 * set_bit - name
 * @n: first entry
 * @index: second
 *
 * Description: something
 *
 * Return: something
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* Check if index is valid */
		return (-1);
	*n |= (1 << index);
	return (1);
}
