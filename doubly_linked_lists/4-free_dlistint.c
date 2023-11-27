#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * free_list - Function name
 * @head: first entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */

void free_dlistint(dlistint_t *head)
{
list_t *follow;

if (head != NULL)
{
	while (head->next != NULL)
	{
	follow = head->next;
	free(head->str);
	free(head);
	head = follow;
	}
	free(head->str);
	free(head);
	}
}
