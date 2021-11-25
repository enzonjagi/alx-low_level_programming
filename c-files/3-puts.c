#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string it receives as a parameter
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
