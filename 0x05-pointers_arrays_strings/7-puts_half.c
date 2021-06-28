#include "holberton.h"
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: the string pointer parameter received
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length, half;

	length = strlen(str);
	if (length % 2 != 0)
	{
		/*print n = (length - 1) / 2*/
		for (half = (length - 1) / 2 ; half < length; half++)
		{
			_putchar(*(str + half));
		}
	}
	else
	{
		for (half = (length - 1) / 2 ; half < length; half++)
		{
			_putchar(*(str + half));
		}
	}
	_putchar('\n');
}
