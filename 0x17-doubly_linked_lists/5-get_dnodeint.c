#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: head of list
 * @index: index of the node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index && node; i++)
	{
		node = node->next;
	}
	if (i == index)
	{
		return (node);
	}
	else
	{
		return (NULL);
	}
}
