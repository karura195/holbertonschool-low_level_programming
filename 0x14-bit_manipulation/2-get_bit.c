#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n > 1)
	{
		for (i = 0; i < index; i++)
		{
			n = n >> 1;
		}
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
