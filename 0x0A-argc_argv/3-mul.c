#include "holberton.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int product;

	if (argc == 3)
	{
		product = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

