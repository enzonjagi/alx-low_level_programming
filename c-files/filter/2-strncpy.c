#include "holberton.h"

/**
 * *_strncpy - copies the string src to dest including '\O'
 * @dest: pointer to destination string
 * @src: point to source string
 * @n: the number of characters to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i; /*index variable*/
	/*loop through src adding each char to dest*/
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
