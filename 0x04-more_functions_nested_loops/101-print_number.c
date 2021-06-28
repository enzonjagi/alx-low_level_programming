#include "holberton.h"

/**
 * print_number - prints integers.
 * @n: parameter one
 *
 * Return: void
 */

void print_number(int n)
{
if (n < 10 && n > -10)
{
_putchar((n % 10) + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
