#include "holberton.h"

/**
 * _memset - sets the memory address 's' with constant byte 'b'
 * @s: character pointer to memory area
 * @b: char to fill the memory area
 * @n: number of bytes to be filled with the constant
 *
 * Return: the pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
