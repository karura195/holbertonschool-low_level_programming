#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: node
 * @str: string
 *
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *new = NULL;

	while (node && node->next)
	{
		node = node->next;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
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
