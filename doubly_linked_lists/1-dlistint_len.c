#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * dlistint_len - Function name
 * @h: first entry
 *
 * Description: counts the members of a list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
