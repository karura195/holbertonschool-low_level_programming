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

for (a = 48; a < 58; a++)
{
for (b = 49; b < 58; b++)
{
if (a < b)
{
putchar(a);
putchar(b);
}
if (a < 56 && a < b)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
