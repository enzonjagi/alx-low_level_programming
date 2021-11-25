#include "holberton.h"

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
