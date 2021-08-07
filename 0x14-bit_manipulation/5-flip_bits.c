#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: count, number of bits needed to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int bits = n ^ m;

	while (bits)
	{
		count += (bits & 1);
		bits = bits >> 1;
	}
	return (count);
}
