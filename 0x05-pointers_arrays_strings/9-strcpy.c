#include "holberton.h"
#include <string.h>

/**
 * _strcpy - copies a string from one pointer to another
 * @dest: pointer to accept string
 * @src: pointer where string is sourced
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char temp;
	int i, length;

	length = strlen(src);

	for (i = 0; i < length; i++)
	{
		temp = *(src + i);
		*(dest + i) = temp;
	}
	return (dest);
}
