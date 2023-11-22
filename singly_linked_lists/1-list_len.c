#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * list_len - Function name
 * @h: first entry
 *
 * Description: counts the members of a list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
