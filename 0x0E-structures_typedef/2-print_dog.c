#include "dog.h"

/**
 * print_dog - prints dog's info
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

		printf("Name: %s\n", d->name);
		printf("Age: %6f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
		printf("Owner: %s\n", d->owner);
}
