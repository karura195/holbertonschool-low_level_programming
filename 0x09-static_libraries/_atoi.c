#include <ctype.h>
#include <stdio.h>

/**
 * _atoi - Convert string in integer
 * @s: String
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}

		else if (isdigit(*s))
		{
			num = (num * 10) + (*s - '0');
		}

		else if (num > 0)
		{
			break;
		}

	} while (*s++);

	return (num * sign);
}
