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
	int len, i;

	len = strlen(str);

	for (i = 0; i <= (len - 1); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
