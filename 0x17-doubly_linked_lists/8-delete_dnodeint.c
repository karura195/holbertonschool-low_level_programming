#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: head of list
 * @index: index
 * Return: list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;
	dlistint_t *node = *head;
	dlistint_t *x;
	dlistint_t *h = *head;
	unsigned int i = 0;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < index)
		return (-1);
	if (index == 0)
	{
		x = *head;
		new = x->next;
		*head = new;
		free(x);
	} else
	{
		while (i < index - 1)
		{
			node = node->next;
			i++;
		}
		x = node->next;
		node->next = x->next;
		free(x);
	}
	return (1);
}
