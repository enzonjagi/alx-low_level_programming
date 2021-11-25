#include "holberton.h"

/**
 * *_strcat - concatenates src to dest
 * @dest: destination address pointed to
 * @src: source addressed copied from
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
