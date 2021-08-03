#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[%d] (nil)\n", 0);
			h = h->next;
		}
		i++;
	}
	return (i);
}
