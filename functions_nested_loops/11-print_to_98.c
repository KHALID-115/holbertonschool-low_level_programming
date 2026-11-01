#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integers from n to 98, followed by a new line
 * @n: The starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
