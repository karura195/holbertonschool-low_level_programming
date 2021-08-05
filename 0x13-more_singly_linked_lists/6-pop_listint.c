#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data
 * @head: list
 *
 * Return: n, the int element of the list
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	*head = node->next;
	n = node->n;
	free(node);

	return (n);
}
