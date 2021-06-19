#include <stdio.h>

/**
* main - Prints all combinations of two digits
* with the two being different
* Return: 0
*/

int main(void)
{
int a;
int b;
int c;

for (a = 48; a < 58; a++)
{
for (b = 49; b < 58; b++)
{
for (c = 50; c < 58; c++)
{
if (a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
}
if (a < 55 && a < b && b < c)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
