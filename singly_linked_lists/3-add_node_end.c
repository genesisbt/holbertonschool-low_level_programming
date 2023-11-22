#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * add_node_end - Function name
 * @head: first entry
 * @str: second entry
 * Description: counts the members of a list
 *
 * Return: length of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
list_t *last;

if (new == NULL)
{
	free(new);
	return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{	free(new->str);
	free(new);
	return (NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
	*head = new;
}
else
{
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}

return (new);
}
