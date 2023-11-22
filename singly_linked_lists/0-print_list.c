#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * print_list - Function name
 * h: first entry
 *
 * Description: counts the members of a list
 *
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	count++;
	h = h->next;
}
return (count);
}
