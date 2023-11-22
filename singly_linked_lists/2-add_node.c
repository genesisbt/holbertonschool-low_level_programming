#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"

/**
 * add_node - Function name
 * @h: first entry
 *
 * Description: counts the members of a list
 *
 * Return: length of list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
{
	return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;

return (new);
}
