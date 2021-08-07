#include "main.h"

/**
 * _pow - returns the power raised to the base number
 * @base: base number
 * @power: times to multiply the base
 *
 * Return: pow
 */

unsigned int _pow(unsigned int base, unsigned int power)
{
	unsigned int i;
	unsigned int pow = 1;

	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (base);
	}
	else
	{
		for (i = 0; i < power; i++)
		{
			pow *= base;
		}
		return (pow);
	}
}

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else if ((*n == 0) || (sizeof(unsigned long int) * *n))
	{
		*n = 0;
	}
	else
	{
		*n = *n - _pow(2, index);
	}
	return (1);
}
