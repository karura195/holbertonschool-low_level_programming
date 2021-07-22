#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				break;
			}
		}
		if (i < size)
		{
			return (i);
		}
	}
	return (-1);
}
