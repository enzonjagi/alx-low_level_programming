#include "holberton.h"

/**
 * print_square - print square using '#' character.
 * @size: parameter to determine size
 *
 * Return: Always 0.
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
/*_putchar('\n');*/
}
}
