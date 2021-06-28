#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 to 9 exclusing 2 & 4
 * @void: receives no parameter
 *
 * Return: void
 */

void print_most_numbers(void)
{
int i = '0';
int n = '\n';

for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
_putchar(i);
}
}
_putchar(n);
}
