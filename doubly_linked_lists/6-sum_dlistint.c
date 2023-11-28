#include"lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_dlistint - Function name
 * @head: first entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */

int sum_dlistint(dlistint_t *head)
{
unsigned int n = 0;
dlistint_t *search = head;

if (head != NULL)
{
	while (search != NULL)
	{
		n += search->n;
		search = search->next;
	}
}
return (n);
}
