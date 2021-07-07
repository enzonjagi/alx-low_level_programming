#include "holberton.h"
#include <string.h>

/**
 * _strlen - checks the length of a string
 * @s: the string it receives
 *
 * Return: void
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
		return;
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
