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

	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*haystack && *b && (*haystack == *b))
		{
			haystack++;
			b++;
		}
		if (!*b)
		{
			return (a);
		}
		haystack = a + 1;
	}
	return ('\0');
}
