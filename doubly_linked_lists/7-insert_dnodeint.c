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
if (idx == 0)
{
    new->next = *h;
    if (*h != NULL)
        (*h)->prev = new;
    *h = new;
    return (new);
}
else if (*h != NULL)
{
	while (search != NULL)
	{
		if (idxcmp == idx)
		{	
			new->prev = search->prev;
			new->next = search;
			if (search->prev != NULL)
				search->prev->next = new;
			search->prev = new;
			return (new);
		}
	search = search->next;
	idxcmp++;
	}
	if (search->next == NULL && idxcmp == idx)
	{
		new->prev = search;
		search->next = new;
		return (new);
	}
}
free(new);
return (NULL);
}
