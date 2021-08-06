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
 * binary_to_uint - converts a binary number to decimal
 * @b: string with the binary number
 *
 * Return: uint, unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i;
	unsigned int uint = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
		{
			return (0);
		}
		else if (*(b + i) == '1')
		{
			uint += 1 * _pow(2, (len - 1 - i));
		}
	}
	return (uint);
}
