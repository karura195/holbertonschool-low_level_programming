#include <stdio.h>

/**
* main - Prints all possible combinations of two two-digit numbers
* Return: 0
*/

int main(void)
{
int a;
int b;
int c;
int d;
for (a = 48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
if (c + d > a + b)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a < 58 && b < 56 && c + d > a + b)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}