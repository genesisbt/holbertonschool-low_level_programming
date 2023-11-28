#include "lists.h"

/**
 * delete_dnodeint_at_index -
 * @head: pointer head
 * @index: index
 *
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
while (i < index && current != NULL)
{
	current = current->next;
	i++;
}
if (current == NULL)
	return (-1);
if (current->next != NULL)
	current->next->prev = current->prev;
if (current->prev != NULL)
	current->prev->next = current->next;
free(current);
return (1);
}
