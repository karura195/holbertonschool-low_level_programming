#include <stdio.h>

/**
* main - Prints the alphabet in lower and upper case
*
* Return: 0
*/

int main(void)
{
char ch;
char ca;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ca = 'A' ; ca <= 'Z' ; ca++)
{
putchar(ca);
}
putchar('\n');
return (0);
}
