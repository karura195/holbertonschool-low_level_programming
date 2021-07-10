#include "holberton.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		exit(EXIT_FAILURE);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(*(argv + i)) == 0)
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		else
		{
			add += atoi(*(argv + i));
		}
	}
	printf("%d\n", add);
	exit(EXIT_SUCCESS);
}

