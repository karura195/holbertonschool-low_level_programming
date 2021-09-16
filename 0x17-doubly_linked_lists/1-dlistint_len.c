#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		i += 1;
		temp = temp->next;
	}
	return (i);
}
