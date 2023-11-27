#ifndef LISTS_H
#define LISTS_H
#include<stdlib.h>


/**
 * struct st1 - stuct definition
 * @str: string
 * @len: str length
 * @next: pointer to next node
 */


typedef struct st1
{
	char *str;
	int len;
	struct st1 *next;
} list_t;

/**
 * struct st2 - struct definition
 * @n: number
 * @next: pointer to next node
 * @prev: pointer to previous node
 */

typedef struct st2
{
	int n;
	struct st2 *next;
	struct st2 *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
