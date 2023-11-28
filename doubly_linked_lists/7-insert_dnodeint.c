#include"lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - Function name
 * @h: first entry
 * @idx: second entry
 * @n: third entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int idxcmp = 0;
int trigger = 0;
dlistint_t *search = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
	free(new);
	return (NULL);
}
new->prev = NULL;
new->next = NULL;
new->n = n;
if (*h == NULL && idx == 0)
{
	trigger = 1;
	*h = new;
}
if (*h != NULL)
{
	while (search != NULL)
	{
		if (idxcmp == idx)
		{
			search->prev->next = new;
			new->prev = search->prev;
			new->next = search;
			search->prev = new;
			trigger = 1;
		}
	search = search->next;
	idxcmp++;
	}
}

if (trigger == 0)
	return (NULL);
else
	return (new);
}
