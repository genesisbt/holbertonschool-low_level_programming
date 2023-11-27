#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * add_dnodeint_end - Function name
 * @n: first entry
 * @head: second entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *current;

if (new == NULL)
{
	free(new);
	return (NULL);
}

new->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
	*head = new;
}
else
{
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;
}
return (new);
}
