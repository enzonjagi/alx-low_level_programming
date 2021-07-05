#include "holberton.h"

/**
 * _memcpy - copies n bytes of src to dest
 * @dest: pointer to the memory area we're copying to
 * @src: pointer to the memory area we're copying from
 * @n: number of bytes to be copied to dest from src
 *
 * Return: ponter to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*unsigned int i = 0, j = 0;*/
	char *ret = dest;

	while (n--)
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
	}
	return (ret);
}
