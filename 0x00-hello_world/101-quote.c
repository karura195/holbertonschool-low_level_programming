#include <unistd.h>
#include <stdio.h>

/**
* main - Prints the indicated phrase without using printf or puts
* Return: 0
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
return (0);
}
