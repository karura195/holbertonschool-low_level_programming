#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
