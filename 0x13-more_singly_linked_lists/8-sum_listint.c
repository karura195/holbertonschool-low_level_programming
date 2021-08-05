#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: list
 *
 * Return: the sum of all the int elements
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		node = head;
		sum += node->n;
		head = node->next;
	}
	return (sum);
}
