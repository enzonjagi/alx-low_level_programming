#include "holberton.h"

/**
 * print_diagonal - prints diagonal on terminal.
 * @n: integer value received
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
{
_putchar('\\');
}
else
{
_putchar(' ');

}
}
_putchar('\n');
}
}
}
