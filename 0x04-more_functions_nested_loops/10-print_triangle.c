#include "holberton.h"

/**
 * print_triangle - print triangle using '#' character.
 * @size: parameter to determine size
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{

if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}

for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
/*_putchar('\n');*/
}
}
