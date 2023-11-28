#include"lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - Function name
 * @head: first entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int n = 0;
dlistint_t *search = head;

if (head != NULL)
{
	while (search != NULL)
	{
		if (n == index)
		{
			return(search);
		}
	search = search->next;
	n++;
	}
}
}
