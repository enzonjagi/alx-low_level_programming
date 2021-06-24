#include "holberton.h"

/**
 * print_numbers - prints numbers 0 to 9
 * @void: receives no parameter
 *
 * Return: void
 */

void print_numbers(void)
{
int i = '0';
int n = '\n';

for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar(n);
}
