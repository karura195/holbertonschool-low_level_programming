#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: list
 * @n: int, element of the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new = NULL;

	while (node && node->next)
	{
		node = node->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (node)
	{
		node->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}
