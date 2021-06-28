#include "holberton.h"
#include <string.h>

/**
 * puts2 - prints a string followed by a new line
 * @str: string it receives as a parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, length;

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(*str++);
	}
	/*
	 *while (*str != '\0')
	 *{
	 *	_putchar(*str++);
	 *}
	 */
	_putchar('\n');
}
