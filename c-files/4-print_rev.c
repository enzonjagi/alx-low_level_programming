#include "holberton.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string passed as a parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
