#include "holberton.h"
#include <string.h>

/**
 * rev_string - prints a string in reverse
 * @s: string passed as a parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
