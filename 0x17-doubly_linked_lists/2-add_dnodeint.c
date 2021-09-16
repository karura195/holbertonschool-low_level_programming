#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: head of list
 * @n: element to add
 * Return: list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	free(new);
	return (*head);
}
