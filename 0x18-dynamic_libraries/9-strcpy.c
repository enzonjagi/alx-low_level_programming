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
	int i;

	/*length = strlen(src);*/

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = 0;

	return (dest);
}
