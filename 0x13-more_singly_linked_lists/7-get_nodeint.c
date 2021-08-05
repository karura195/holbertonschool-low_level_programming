#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: list
 * @index: index of the node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	if (head == NULL)
	{
		return (0);
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
