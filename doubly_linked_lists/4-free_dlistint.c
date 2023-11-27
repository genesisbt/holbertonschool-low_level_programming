#include"lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - Function name
 * @head: first entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *follow;

if (head != NULL)
{
	while (head->next != NULL)
	{
	follow = head->next;
	free(head);
	head = follow;
	}
	free(head);
	}
}
