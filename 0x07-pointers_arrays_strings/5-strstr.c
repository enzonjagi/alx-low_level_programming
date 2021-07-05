#include "holberton.h"

/**
 * _strstr - checks if 'haystack' has the substring 'needle'
 *           and returns the first occurence of this substring
 * @haystack: string we're checking
 * @needle: substring we're looking for
 *
 * Return: pointer to this occurence in @haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i++])
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return ('\0');
}
