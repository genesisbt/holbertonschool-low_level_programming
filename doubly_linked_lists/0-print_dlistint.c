#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * print_dlistint - Function name
 * @h: first entry
 *
 * Description: counts the members of a list
 *
 * Return: length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
