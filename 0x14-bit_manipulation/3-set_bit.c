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
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: n + the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = *n + _pow(2, index);
	return (*n);
}
