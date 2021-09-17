#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: head of list
 * @idx: index
 * @n: element to insert
 * Return: list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < idx - 1; i++)
	{
		node = node->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	if (i == idx - 1)
	{
		new->n = n;
		new->next = node->next;
		node->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
