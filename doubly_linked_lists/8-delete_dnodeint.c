#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return -1;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1;
	}
while (i < index && current != NULL)
{
	current = current->next;
	i++;
}
if (current == NULL)
	return -1;
if (current->next != NULL)
	current->next->prev = current->prev;
if (current->prev != NULL)
	current->prev->next = current->next;
free(current);
return 1;
}
