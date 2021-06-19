#include <stdio.h>

/**
* main - Prints numbers separated by , from 0 to 9
* Return: 0
*/

int main(void)
{
int a;
int b;
for (a = 48; a < 58; a++)
{
putchar(a);
if (a < 57)
{
for (b = 32; b < 45; b+=12)
{
putchar(b);
}
}
else
{
putchar(36);
}
putchar('\n');
return (0);
}
