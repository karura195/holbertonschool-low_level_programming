#include <stdio.h>

/**
* main - Prints numbers separated by , from 0 to 9
* Return: 0
*/

int main(void)
{
int a;

for (a = 48; a < 58; a++)
{
putchar(a);
putchar(', ');
}
putchar(36);
putchar('\n');
return (0);
}
