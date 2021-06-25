#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long int a = 612852475143;
	int i;

	for (i = 2; i < a; i++)
	{
		while (a % i == 0)
		{
			a = a / i;
		}
	}
	printf("%d\n", i);
return (0);
}
