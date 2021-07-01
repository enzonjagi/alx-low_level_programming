#include "holberton.h"

/**
 * *_strncat - concatenates src to dest
 * @dest: destination address pointed to
 * @src: source addressed copied from
 * @n: number of bytes to be concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;
	/*int src_len = 0;*/

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	/*for (i = 0; src[i] != '\0'; i++)src_len++;*/

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
